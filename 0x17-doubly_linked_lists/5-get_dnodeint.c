#include "lists.h"

/**
 * get_dnodeint_at_index - This returns the nth node
 * of a dlistint_t linked list.
 * @head: The pointer to head of the list
 * @index: The index of the node to search for, starting from 0
 * Return: This returns nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
