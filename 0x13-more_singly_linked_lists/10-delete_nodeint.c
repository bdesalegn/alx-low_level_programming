/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to the head of the listint_t linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL) /* empty list */
	return (-1);

	if (index == 0) /* remove the head */
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	previous = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL) /* index out of range */
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
