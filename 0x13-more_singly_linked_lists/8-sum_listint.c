#include "lists.h"

/**
  * sum_listint - function that return sum of
  * all the data (n) of a linked list
  * @head: address of head
  * Return: sum of all data in a linked list,
  * 0 if empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new;

	new = head;

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
