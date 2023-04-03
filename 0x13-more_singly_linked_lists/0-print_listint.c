#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: The linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberz = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberz++;
		h = h->next;
	}
	return (numberz);
}
