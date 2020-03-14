#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

void print_string(va_list);
void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);


/**
 * struct opt - Typedef struct
 *
 * @op: Format
 * @f: The function associated
 **/
typedef struct opt
{
	char *op;
	void (*f)(va_list);
} p_opt;

#endif
