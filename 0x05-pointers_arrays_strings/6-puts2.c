#include "main.h"
#include <string.h>

/**
  * puts2 - function that prints every other character of
  * a string
  * @str: pointer to string
  * Return: nothing
  */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
