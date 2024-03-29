#include "lists.h"

/**
  * free_listint2 - function that frees listint_t list
  * @head: pointer to address of head
  * Description: sets head to NULL
  */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	head = NULL;
}
