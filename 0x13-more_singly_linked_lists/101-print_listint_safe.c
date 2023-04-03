#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - The number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *goat, *fowl;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	goat = head->next;
	fowl = (head->next)->next;

	while (fowl)
	{
	if (goat == fowl)
	{
	goat = head;
	while (goat != fowl)
	{
	nodes++;
	goat = goat->next;
	fowl = fowl->next;
	}
	fowl = fowl->next;
	while (goat != fowl)
	{
	nodes++;
	goat = goat->next;
	}
	return (nodes);
	}
	goat = goat->next;
	fowl = (fowl->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function that Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, flex = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
	for (flex = 0; flex < nodes; flex++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
