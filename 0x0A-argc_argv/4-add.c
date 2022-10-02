#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - print program name
  * @argc: arguments count
  * @argv: array of pointers to strings
  * followed by a new line
  * Return: 1 if error else 0
  */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
