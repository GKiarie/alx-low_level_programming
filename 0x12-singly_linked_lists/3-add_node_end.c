#include "lists.h"

/**
  * add_node_end - function that adds a new node
  * at the end of a list_t list
  * @head: pointer to head pointer
  * @str: string to add to new node
  * Return: address of new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != 0; len++)
		;

	new->str = malloc(len + 1);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	for (; *head; )
	{
		head = &((*head)->next);
	}

	*head = new;
	return (new);
}
