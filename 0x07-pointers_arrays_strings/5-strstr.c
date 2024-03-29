#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: The substring in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_length = 0;
	int haystack_length = 0;
	int matching_chars = 0;
	int i, j, offset;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; needle[i] != '\0'; i++)
		needle_length++;
	for (i = 0; haystack[i] != '\0'; i++)
		haystack_length++;
	if (needle_length > haystack_length)
		return (0);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				matching_chars = 0;
				break;
			}
			else
			{
				if (!matching_chars)
					offset = i;
				matching_chars++;
				i++;
			}
			if (needle_length == matching_chars)
				return (haystack + offset);
		}
	}
	return (0);
}
