#include "lists.h"
/**
 * free_listint - Frees a linked list of integers and sets head pointer to NULL
 * @head: A pointer to a pointer to the head node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
