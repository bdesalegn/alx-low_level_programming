#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned, starting at 0
 *
 * Return: pointer to the nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

    /* Traverse the list until the nth node */
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

    /* If the node does not exist, return NULL */
	if (current == NULL)
	return (NULL);

    /* Return the nth node */
	return (current);
}
