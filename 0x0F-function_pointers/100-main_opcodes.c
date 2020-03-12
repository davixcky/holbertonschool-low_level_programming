#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void error(int status)
{
	printf("Error\n");
	exit(status);
}


int main(int aux, char **argv)
{

	int i;

	if (aux != 2)
		error(1);

	aux = atoi(argv[1]);
	if (aux < 0)
		error(2);

	unsigned char *bytes = (unsigned char *) main;

	for (i = 0; i <= aux; i++)
		printf("%x%c", bytes[i], (i < aux) ? ' ' : '\n');

	return 0;
}