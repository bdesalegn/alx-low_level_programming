#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
	{
	printf("[0] (nil)\n");
	h = h->next;
	s++;
	}
	else
	{
	printf("[%d{] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}
	}
	return (s);
}
