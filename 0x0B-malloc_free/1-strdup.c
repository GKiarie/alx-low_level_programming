#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function returns a pointer to a new string which
  * is a duplicate of the string str
  * @str: input string to be duplicated
  * Return: pointer to a new string
  */
char *_strdup(char *str)
{
	char *ptr;
	int count;

	/* length of string */

	int length = 0;

	/* return NULL if str is NULL) */
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	/* size of bytes to be allocated */

	ptr = malloc((length * sizeof(char)) + 1);

	/* returns NULL if ptr == NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* copy string to new mem location */

	for (count = 0; str[count] != '\0'; count++)
	{
		ptr[count] = str[count];
	}

	ptr[count] = '\0';


	return (ptr);
}
