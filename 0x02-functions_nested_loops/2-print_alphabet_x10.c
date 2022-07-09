#include "main.h"

/**
* print_alphabet_x10 - print the
* alphabet in lowercase 10 times
* followed by a new line.
* No return
*/
void print_alphabet_x10(void)
{
	int number_of_times;

	for (number_of_times = 0; number_of_times < 10; number_of_times++)
	{
		char c;

		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

	}
}
