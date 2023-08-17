#include "lists.h"

/**
 * free_dlistint - This frees a dlistint_t list.
 * @head: This points to the head of the list
 * Return: This returns nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
