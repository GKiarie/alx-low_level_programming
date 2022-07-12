#include "main.h"
#include <string.h>

/**
  * rev_string - function that reverses a string
  * @s: string to be reversed
  * Return: none
  */
void rev_string(char *s)
{
	int len;
	int i;
	char c;

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
