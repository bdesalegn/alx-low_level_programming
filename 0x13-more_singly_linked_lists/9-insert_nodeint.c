#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be returned, starting at 0
 * @n: content of the new node
 *
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

    /* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	/* Memory allocation failed */
		return (NULL);
	}

    /* Set the value of the new node to n */
	new_node->n = n;

    /* If the index is 0, the new node becomes the new head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

    /* Traverse the list until we reach the desired index */
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

    /* If we've reached the end of the list before finding the desired index*/
	if (temp == NULL)
	{
		return (NULL);
	}

    /* Insert the new node between the previous node and the current node */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
