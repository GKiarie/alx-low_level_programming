#include "main.h"

/**
  * append_text_to_file - function that appends text at
  * the end of a file
  * @filename: name of file to create
  * @text_content: string to write to the file
  * is NULL terminated
  * Return: 1 sucess, -1 failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
