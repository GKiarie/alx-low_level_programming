#include "main.h"

/**
  * read_textfile - function that reads a text file
  * and prints it to POSIX std output
  * @filename: pointer to name of file
  * @letters: number of letters it should read & print
  * Return: number of letters it could read n print
  * 0 if file couldnt be opened or read, filena,me
  * is NULL, write fails or doesnt write expected amt
  * of bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w, r;
	char *buffer;

	buffer = (char *) malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	buffer[letters] = '\0';

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1)
		return (0);

	close(fd);
	free(buffer);

	return (w);
}
