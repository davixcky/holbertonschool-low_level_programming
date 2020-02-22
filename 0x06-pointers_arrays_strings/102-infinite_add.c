#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: buffer to function.
 * @size_r: Buffer size.
 * Return: Pointer to awnser.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, i, j, k, l, m, sum, remain, num1, num2;

	i = l = j = k = remain =  0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		num1 = num2 = 0;
		if (i >= 0)
			num1 = n1[i--] - '0';
		if (j >= 0)
			num2 = n2[j--] - '0';
		sum = num1 + num2 + remain;
		if (sum > 9)
		{
			remain = 1;
			sum = sum - 10;
		}
		else
			remain = 0;
		r[k++] = (sum + '0');
	}
	if (remain == 1)
		r[k++] = (1 + '0');
	m = k;
	k = k - 1;
	for (l = 0; l < k; l++, k--)
	{
		num = r[k];
		r[k] = r[l];
		r[l] = num;
	}
	r[m] = '\0';
	return (r);
}

