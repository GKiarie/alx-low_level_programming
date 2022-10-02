#include "main.h"
#include <stdio.h>

/**
  * main - print program name
  * @argc: arguments count
  * @argv: array of pointers to strings
  * followed by a new line
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
