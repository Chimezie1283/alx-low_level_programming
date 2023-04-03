#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * @head: The pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *dump;

	if (head == NULL)
		return;

	while (*head)
	{
		dump = (*head)->next;
		free(*head);
		*head = dump;
	}
	*head = NULL;
}
