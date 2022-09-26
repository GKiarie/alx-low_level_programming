#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the first occurence of a character c in a given
 * string s
 * @s: input string
 * @c: character to be checked
 * Return: pointer to first occurence of char c in string s
 * NULL if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
