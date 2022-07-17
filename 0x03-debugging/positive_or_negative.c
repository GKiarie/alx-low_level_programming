#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print out random number
 * @n: integer input
 * number may be 0, +ve or -ve
 * Return: Nothing
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
