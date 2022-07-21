#include "main.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: number whose factorial is to be returned
  * Return: -1 to indicate error (n lower than 1), Factorial of n
  * Factorial 0 is 1
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
