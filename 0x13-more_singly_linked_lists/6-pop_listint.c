#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: pointer to the head node of the linked list
 *
 * Return: the data (n) of the removed head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if list is empty */
	if (*head == NULL)
		return (0);

    /* Store the data of the head node */
	data = (*head)->n;

    /* Move the head pointer to the next node */
	temp = *head;
	*head = (*head)->next;

    /* Free the memory of the removed head node */
	free(temp);

    /* Return the data of the removed head node */
	return (data);
}
