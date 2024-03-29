#include "lists.h"

/**
  * list_len - function that returns the
  * number of elements in a linked list
  * @h: list
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	int n;

	for (n = 0; h; n++, h = h->next)
		;

	return (n);
}
