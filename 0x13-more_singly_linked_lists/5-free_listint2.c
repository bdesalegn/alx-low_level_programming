#include "lists.h"
/**
 * free_listint2 - Frees a linked list of integers and set pointer to NULL
 * @head: A pointer to a pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
	return;

	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
