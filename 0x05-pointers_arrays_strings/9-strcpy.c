#include "main.h"

/**
  * _strcpy - function that copies the string pointed to by src
  * including the null byte to the buffer pointed to by dest
  * @dest: input destination pointer
  * @src: input string source pointer
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
