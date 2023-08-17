#include "lists.h"

/**
 * dlistint_len - This returns the number of elements in
 * a double linked list
 *
 * @h: This is the head of the list
 * Return: This is the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int countz;

	countz = 0;

	if (h == NULL)
		return (countz);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		countz++;
		h = h->next;
	}

	return (countz);
}
