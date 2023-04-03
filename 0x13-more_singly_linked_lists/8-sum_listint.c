#include "lists.h"

/**
 * sum_listint -  A function that calculates the sum of all the data in a listint_t list
 * @head: The first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int sumz = 0;
	listint_t *dump = head;

	while (dump)
	{
		sumz += dump->n;
		dump = dump->next;
	}
	return (sumz);
}
