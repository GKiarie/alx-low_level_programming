#include "main.h"

/**
  * create_file - function that creaytes s file
  * @filename: name of file to create
  * @text_content: string to write to the file
  * is NULL terminated
  * Return: 1 sucess, -1 failure
  * permissions rw-------
  */

int create_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
