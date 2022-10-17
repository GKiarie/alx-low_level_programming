#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints strings followed by
  * a new line
  * @separator: pointer to string, to be printed
  * between strings, dont print if NULL
  * @n: number of strings passed to ftn
  * @...: A variable number of params
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
