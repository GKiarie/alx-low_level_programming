#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers followed by
  * a new line
  * @*separator: pointer to string, to be printed
  * between numbers, dont print if NULL
  * @n: number of integers passed to ftn
  * @...: A variable number of params
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
