#include "holberton.h"
#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


void swap_int(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}


char *infinite_add(char *n1, char *n2, char *c, int size_r)
{
	int l_n1, l_n2; /* length */
	int res, car, aux, i, j, car_temp;

	l_n1 = _strlen(n1);
	l_n2 = _strlen(n2);

	l_n1--;
	l_n2--;

	i = 0;
	car = 0;
	car_temp = 0;

	for (; l_n1 >= 0 || l_n2 >= 0; l_n1--, l_n2--)
	{
		if (l_n1 < 0) /* no more numbers */
			res = n2[l_n2] - '0';
		else if (l_n2 < 0)
			res = n1[l_n1] - '0';
		else
			res = n1[l_n1] - '0' + n2[l_n2] - '0';

		res += car_temp;
		if (res >= 10)
			car = res / 10;

		aux = res % 10;
		c[i] =  aux + 48;
		car_temp = car;
		i++;
	}

	if (car_temp != 0)
		c[i] = car_temp + '0';

	i++;

	c[i] = '\0';
	for (j = 0; j < i / 2; j++)
	{
		swap_int(c + j, c + i - j - 1);
	}

	if (i + 1 > size_r)
		return (0);

	return (c);

}
