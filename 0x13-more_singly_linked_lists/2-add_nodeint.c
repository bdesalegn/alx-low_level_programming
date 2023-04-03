#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the starts of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

    /* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

    /* Set the data and next pointer of the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
