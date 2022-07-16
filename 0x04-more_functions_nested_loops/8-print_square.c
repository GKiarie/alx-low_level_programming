#include "main.h"

/**
  * print_square - function that prints a square, followed by a new line
  * @size: size of square
  * size 0 or less; print new line
  * # character to be used
  */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
