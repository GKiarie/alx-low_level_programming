#include "main.h"

/**
 * print_alphabet - print the alphabet in
 * lowercase followed by a new line
 * Return: No return value
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
