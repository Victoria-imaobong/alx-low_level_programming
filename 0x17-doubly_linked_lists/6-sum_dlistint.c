#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 * @head: head of node
 * Return: sum of node data,
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
