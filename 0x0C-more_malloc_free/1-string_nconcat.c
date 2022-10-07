#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function tyhat concatenates two strings
  * @s1: input string 1
  * @s2: input string 2
  * @n: no of bytes on s2
  * Return: NULL if ftn fails, pointer to concatenated
  *         spcae otherwise
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for ( i = 0; s1[i]; i++)
	{
		len++;
	}

	c = malloc(sizeof(char) * len +1));

	if (c == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		c[len++] = s2[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		c[len++] = s2[i];
	}

	c[len] = '\0';

	return (c);
}
