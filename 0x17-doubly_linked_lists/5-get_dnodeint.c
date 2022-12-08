#include "lists.h"

/**
 * get_dnodeint_at_index - ftn that returns nth node
 * of a linked list
 * @head: head of list
 * @index: index of nth node
 * Return: nth node, NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	if (index == 0)
	{
		return (temp);
	}

	while (temp && n != index)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
