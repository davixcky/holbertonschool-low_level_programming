#include "holberton.h"
/**
 * main - Entry point
 * @ac: Number or arguments
 * @av: Arguments
 * Return: 0 if failed
 */
int main(int ac, char **av)
{
	int from, to, fd, fd_new, i;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	fd = read(from, buff, 1024);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_new = write(to, buff, fd);
	if (fd_new == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	i = 2;
	while (fd > 0)
	{
		fd = read(from, buff, 1024 * i);
		if (fd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		fd_new = write(to, buff, fd);
		if (fd_new == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

		i++;
	}

	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}

