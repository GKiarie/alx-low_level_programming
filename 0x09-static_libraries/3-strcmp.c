#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: first string input
  * @s2: second input string
  * Return: difference between ascii values (s1[i] - s2[1])
  */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	diff = 0;

	for (i = 0; ((s1[i] != '\0' || s2[i] != '\0') && diff == 0); i++)
	{
		diff = s1[i] - s2[i];
	}

	return (diff);
}
