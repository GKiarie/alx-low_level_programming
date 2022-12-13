#include "main.h"

/**
  * _strlen - function that returns length of a string
  * @s: input pointer to string
  * Return: Always 0
  */
int _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char index = s[0];

	while (index != '\0')
	{
		sum++;
		index = s[i++];
	}
	return (sum);
}
