#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: The linked list to search for
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *zlow = head;
	listint_t *fazt = head;

	if (!head)
	return (NULL);

	while (zlow && fazt && fazt->next)
	{
		fazt = fazt->next->next;
		zlow = zlow->next;
	if (fazt == zlow)
	{
		zlow = head;
	while (zlow != fazt)
	{
		zlow = zlow->next;
		fazt = fazt->next;
	}
	return (fazt);
	}
	}
	return (NULL);
}
