#include "lists.h"

/**
  * free_list - function that frees a list_t
  * list
  * @head - pointer to list to be freed
  * Return: nothing
  */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

	free(head->str);
	free(head);
}
