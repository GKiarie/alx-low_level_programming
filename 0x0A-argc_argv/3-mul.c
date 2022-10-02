#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - print program name
  * @argc: arguments count
  * @argv: array of pointers to strings
  * followed by a new line
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
}
