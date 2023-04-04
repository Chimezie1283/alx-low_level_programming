#include "lists.h"

/**
 * insert_nodeint_at_index - A function that
 * inserts a new node in a linked list,
 * at a given position
 * @head: The pointer to the first node in the list
 * @idx: The index where the new node is added
 * @n: The data to insert in the new node
 *
 * Return: The pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *latest;
	listint_t *dump = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest || !head)
	return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
	latest->next = *head;
	*head = latest;
	return (latest);
	}
	for (m = 0; dump && m < idx; m++)
	{
	if (m == idx - 1)
	{
		latest->next = dump->next;
		dump->next = latest;
	return (latest);
	}
	else
		dump = dump->next;
	}
	return (NULL);
}
