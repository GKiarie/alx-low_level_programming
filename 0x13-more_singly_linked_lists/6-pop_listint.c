#include "lists.h"

/**
  * pop_listint - function that deletes the head node of
  * a listint_t list
  * @head: pointer to address of head
  * Return: head node data(n), 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *new = NULL;

	if (!*head)
		return (0);
	new = (*head)->next;
	data = (*head)->n;
	free(*head);
	(*head) = new;

	return (data);
}
