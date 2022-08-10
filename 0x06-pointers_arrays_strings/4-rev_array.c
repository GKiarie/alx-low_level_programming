#include "main.h"

/**
  * reverse_array - function that reverses the contents
  * of an array of integers
  * @a: pointer input to inetger array
  * @n: second input number of elements in the array
  */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;


	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
