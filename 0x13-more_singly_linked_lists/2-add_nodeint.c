#include "lists.h"

/**
  * add_nodeint - function that adds a new node
  * at the beginning of a listint_t list
  * @head: pointer to address of the head of
  * listint_t list
  * @n: value to be contained in new node
  * Return: Address of new element, NULL if
  * failure
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
