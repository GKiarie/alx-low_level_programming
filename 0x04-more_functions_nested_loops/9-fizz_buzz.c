#include <stdio.h>

/**
  * main - function that prints numbers from 0 - 100
  * for multiples of 3 print Fizz, multiples of 5 print Buzz
  * multiples of both print fizzbuzz
  * Return: Alway 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				if (i % 3 == 0)
				{
					printf("Fizz");
				}
				else
				{
					printf("%d", i);
				}
			}
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
