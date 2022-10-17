#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * sum_them_all - sums all parameters
  * @n: number of variadic functions
  * @...: A variable number of params
  * Return: sum of parameters, 0 if n == 0
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);
}
