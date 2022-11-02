#include "main.h"

/**
  * main - program entry point
  * @argc: number of args
  * @argv: args
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
  * copy_file - function tthat copies files
  * @filename: file to be copied
  * @new_file: file to copy to
  * Return: length of string
  */

int copy_file(const char *filename, const char *new_file)
{
	int f_new, f_old, w_new, r_old;
	int size = 1024;
	char *buffer;

	buffer = (char *) malloc(sizeof(char));

	if (buffer == NULL)
		return (-1);

	f_old = open(filename, O_RDONLY);

	if (f_old == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	r_old = read(f_old, buffer, size);
	buffer[r_old] = '\0';
	if (r_old == -1)
	{
		exit(98);
	}

	f_new = open(new_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_new == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", new_file);
		exit(99);
	}

	w_new = write(f_new, buffer, r_old);
	if (w_new == -1)
		exit(99);

	close_file(f_old);
	close_file(f_new);
	free_buffer(buffer);

	return (r_old);
}

/**
  * close_file - function that closes a file
  * @fd: file descriptor
  */

void close_file(int fd)
{
	int _return;

	_return = close(fd);

	if (_return == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", errno);
		exit(100);
	}
}

/**
  * free_buffer - function to free buffer
  * @buffer: buff to be freed
  */

void free_buffer(char *buffer)
{
	if (buffer != NULL)
		free(buffer);
}
