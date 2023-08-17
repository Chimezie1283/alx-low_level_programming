#include "lists.h"

/**
 * sum_dlistint - This returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: This is head of the list
 * Return: This returns sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
