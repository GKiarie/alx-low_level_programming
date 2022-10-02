#include "main.h"
#include <stdio.h>

/**
  * main - print program name
  * @argc: arguments count
  * @argv: array of pointers to strings
  * followed by a new line
  * Return: Always 0
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", (argc - 1));

	return (0);
}
