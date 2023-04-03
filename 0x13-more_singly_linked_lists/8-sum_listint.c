#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0; /* variable to store the sum of data */

    /* iterate over the linked list */
	while (head != NULL)
	{
		sum += head->n; /* add the data of the current node to the sum */
		head = head->next; /* move to the next node */
	}
	return (sum);
}
