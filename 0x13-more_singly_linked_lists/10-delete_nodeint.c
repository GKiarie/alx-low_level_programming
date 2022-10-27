#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at
  * index of a linked list
  * @head: pointer to address of head
  * @index: index of node that should be deleted
  * Return: 1 if success, -1 on failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	curr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	next = curr->next;
	curr->next = next->next;
	free(next);
	return (1);
}
