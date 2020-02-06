#include <stdio.h>
#include "unistd.h"

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(s) / sizeof(s[0]);
write(2, s, len - 1);
return (1);
}
