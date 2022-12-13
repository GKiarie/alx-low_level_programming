#include "main.h"

/**
  * _atoi - function that converts a string to an integer
  * @s: input string to be converted to int
  * Return: integer conversion of the string; if there are
  * no numbers in the string, function must return 0
  */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}

	} while (*s++);

	return (num * sign);
}
