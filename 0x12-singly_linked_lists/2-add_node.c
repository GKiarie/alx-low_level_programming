#include "lists.h"

/**
  * _strlen - ftn that finds len of a string
  * @str: pointer to string
  * Return: size of string
  */

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
  * add_node - function that adds a new
  * node at the beginning of a list_t list
  * @head: pointer to lionked list ptr
  * @str: string to be linked
  * Return: address of new element, NULL
  * on failure
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	if (str == NULL)
	{
		return (NULL);
	}

	node_new = malloc(sizeof(list_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->str = strdup(str);

	if (node_new == NULL)
	{
		free(node_new);
		return (NULL);
	}
	node_new->len = _strlen(node_new->str);
	node_new->next = *head;
	*head = node_new;
	return (node_new);
}
