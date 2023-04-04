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
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("Error: infinite loop detected in list\n");
			exit(98);
		}
	}
	while (head)
	{
		printf("%d\n", head->n);
		count++;
		if (head == slow)
			break;
		head = head->next;
	}
	return (count);
}
