#include <stdio.h>
#include "lists.h"
/**
 *  print_listint - print elements of linkd list
 *  @h: head of the list
 *
 *  Return: the number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
