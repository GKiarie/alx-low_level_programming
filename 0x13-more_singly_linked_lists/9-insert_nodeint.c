#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new
  * node at a given position
  * @head: pointer to address of head
  * @idx: index of the list where the new node shld be added
  * index starts at 0
  * @n: value for new node
  * Return: address of new node, NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		curr = *head;
		for (i = 0; i < idx - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
		if (curr == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
