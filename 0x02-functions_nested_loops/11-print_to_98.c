#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers
  * from n to 98
  * @n: input number
  * Return: count of numbers to 98
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
}
