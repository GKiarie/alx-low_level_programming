#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: pointer to the destination array where content is to
  * be copied
  * @src: pointer to the soirce data to be copied
  * @n: Number of bytes to be copied
  * Return: pointer to destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}