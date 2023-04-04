#include "lists.h"

/**
 * print_listint_safe - Prints a list of integers safely.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;
		next = current->next;
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *) next, next->n);
			exit(98);
		}
		current = next;
	}
	return (count);
}
