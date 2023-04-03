#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: The pointer to the first node in the list
 *
 * Return: The pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = before;
	before = *head;
	*head = next;
	}
	*head = before;

	return (*head);
}
