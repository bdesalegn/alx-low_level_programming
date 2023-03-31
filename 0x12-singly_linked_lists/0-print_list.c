#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		count++;
	}
	return (count);
}
