#include "lists.h"

/**
 * delete_dnodeint_at_index - ftn that deletes nodes
 * at index
 * @head: head of list
 * @index: index of node to be deleted
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t idx;
	dlistint_t *current, *tmp;
	dlistint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	for (idx = 0; *head != NULL; head = &(*head)->next, idx++)
	{
		if (idx == index)
		{
			current = *head;
			tmp = (*head)->next;

			prev_node = current->prev;
			next_node = current->next;

			if (prev_node)
				prev_node->next = next_node;

			if (next_node)
				next_node->prev = prev_node;

			free(current);
			*head = tmp;
			return (1);
		}
	}

	return (-1);
}
