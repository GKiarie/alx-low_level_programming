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
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
