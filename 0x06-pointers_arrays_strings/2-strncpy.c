#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: pointer to the destination array where content
  * is to be copied
  * @src: string to be copied
  * @n: number of characters to be copied from source
  * Return: pointer to the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
