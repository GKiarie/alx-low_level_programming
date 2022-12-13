#include "main.h"
#include <string.h>

/**
  * _strcat - function appends the src string to the dest string
  * overwriting the terminating null byte (\0) at the end of dest
  * then adds a terminating null byte
  * @dest: pointer to dest
  * @src: pointer to src
  * Return: pointer to resulting string dest.
  */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
