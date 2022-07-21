#include "main.h"

/**
  * _strlen_recursion - function that return the length of a string
  * @s: pointer to the first character of string s
  * Return: Always 0
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = length + 1;
		length = length + _strlen_recursion(++s);
	}
	return (length);
}
