#include "lists.h"

/**
  * get_nodeint_at_index - functiom that returns
  * the nth node of a listint_t list
  * @head: address of head of list
  * @index: index of node, strating at 0
  * Return: nth node on a listint_t list
  * NULL if node doesnt exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
