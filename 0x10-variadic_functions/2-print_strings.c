#include "variadic_functions.h"

void print_strings(const char *s, const unsigned int n, ...)
{
	int i;
	va_list str;
	char *aux;

	va_start(str, n);

	for (i = 0; i < (int) n - 1; i++)
	{
		aux = va_arg(str, char*);
		printf("%s%s", (aux != NULL) ? aux : "(nil)",
				(s == NULL) ? "" : s);
	}

	aux = va_arg(str, char*);
	printf("%s\n", (aux != NULL) ? aux : "(nil)");


	va_end(str);
}
