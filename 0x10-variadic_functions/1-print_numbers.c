#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < (int) n - 1; i++)
		printf("%d%s", va_arg(nums, int), (separator == NULL) ? "" : separator);

	printf("%d\n", va_arg(nums, int));

	va_end(nums);
}

