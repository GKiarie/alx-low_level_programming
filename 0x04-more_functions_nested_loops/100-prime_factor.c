#include <stdio.h>

/**
  * main - program that finds and prints largest
  * prime factors of num 612852475143
  * followed by a new line
  * Return: nothing
  */
int main(void)
{
	long int num = 612852475143;
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			/* printf("%d ", count); */
			num = num / count;
		}
	}
	printf("%d\n", count);

	return (0);
}
