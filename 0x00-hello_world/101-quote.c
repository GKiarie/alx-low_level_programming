#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * prints the end of a quote followed by a new line to standard error.
 * Return: 1 success
 */
int main(void)
{
	write(fd, "and that piece of art is useful\" - Dora Korpar, 2-15-10-10\n", 58);

	close(fd);

	return (1);
}
