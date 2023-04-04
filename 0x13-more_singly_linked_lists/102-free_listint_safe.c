#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL)
	return (0);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;
	return (size);
}
