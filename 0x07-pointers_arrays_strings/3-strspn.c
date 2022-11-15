#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
  * _strspn - fuction that gets the length of a prefix substring
  * Allows us to determine how many chars in an
  * initial segment of a string are made up of a specific
  * set co characters
  * @s: string to be checked
  * @accept: string to check against
  * Return: number of bytes in the initial segment of s
  * which consists only bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int len, i, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (s[i] != accept[j])
			break;

	}

	return (len);
}
