#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: A pointer to the first node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenz = 0;
	int difference;
	listint_t *dump;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
	if (difference > 0)
	{
		dump = (*h)->next;
		free(*h);
		*h = dump;
		lenz++;
	}
	else
	{
		free(*h);
		*h = NULL;
		lenz++;
	break;
	}
	}
	*h = NULL;

	return (lenz);
}
