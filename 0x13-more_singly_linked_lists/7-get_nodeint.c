#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * node at a certain index in a linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 *
 * Return: The pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *dump = head;

	while (dump && m < index)
	{
		dump = dump->next;
		m++;
	}
	return (dump ? dump : NULL);
}
