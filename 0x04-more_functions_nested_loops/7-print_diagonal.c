#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal
  * @n: number of times the character \ is printed
  * if n is 0 or less, print \n
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
