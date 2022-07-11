#include "main.h"

/**
  * swap_int - function that swaps values of
  * two integers.
  * @a: first pointer param
  * @b: second pointer param
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int q;
	int *c;

	c = &q;
	*c = *a;
	*a = *b;
	*b = *c;
}
