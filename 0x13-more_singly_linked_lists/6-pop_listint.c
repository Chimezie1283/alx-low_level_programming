#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *dump;
	int numberz;

	if (!head || !*head)
	return (0);

	numberz = (*head)->n;
	dump = (*head)->next;
	free(*head);
	*head = dump;

	return (numberz);
}
