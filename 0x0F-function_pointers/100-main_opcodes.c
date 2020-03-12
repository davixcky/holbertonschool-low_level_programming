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

	if (aux != 2)
		error(1);

	aux = atoi(argv[1]);
	if (aux < 0)
		error(2);

	char *bytes = (char *) main;

	for (int i = 0; i < aux; i++)
		printf("%x%c", (unsigned char) (bytes[i]), (i < aux - 1) ? ' ' : '\n');

	return 0;
}