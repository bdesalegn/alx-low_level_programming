#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy;

	if (new_node == NULL)
	{
		return (NULL); /* Failed to allocate memory for new node*/
	}
	str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL); /* Failed to allocate memory for string copy*/
	}
	new_node->str = str_copy;
	new_node->next = NULL;
	if (*head == NULL)/* The list is empty*/
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
