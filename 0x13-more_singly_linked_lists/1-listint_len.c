#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked lists
 * @h: The linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numberz = 0;

	while (h)
	{
		numberz++;
		h = h->next;
	}
	return (numberz);
}
