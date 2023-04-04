#include "lists.h"

/**
 * delete_nodeint_at_index - A function that
 * deletes a node in a linked list at a certain index
 * @head: The pointer to the first element in the list
 * @index: The index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dump = *head;
	listint_t *invoke = NULL;
	unsigned int m = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(dump);
	return (1);
	}
	while (m < index - 1)
	{
	if (!dump || !(dump->next))
	return (-1);
		dump = dump->next;
		m++;
	}
		invoke = dump->next;
		dump->next = invoke->next;
		free(invoke);

	return (1);
}
