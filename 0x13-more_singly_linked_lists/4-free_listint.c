#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: The listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *dump;

	while (head)
	{
		dump = head->next;
		free(head);
		head = dump;
	}
}
