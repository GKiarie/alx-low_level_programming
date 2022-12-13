#include "main.h"
#include <string.h>

/**
  * _strncat - function that concatenates two strings
  * @dest: pointer to destimation
  * @src: pointer to source string
  * @n: number of bytes from source
  * Return: pointer to resultiong string dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
