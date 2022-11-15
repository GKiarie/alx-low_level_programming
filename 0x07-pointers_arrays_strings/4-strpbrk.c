#include "main.h"

/**
 * _strpbrk - ftn that searches for a string for any
 * set of bytes
 * @s: pointer to string to be scanned
 * @accept: String containing the characters to match
 * Return: It returns a pointer to the character in s1 that
 * matches one of the characters in s2, else returns NULL.
 **/
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

	}

	return (0);
}
