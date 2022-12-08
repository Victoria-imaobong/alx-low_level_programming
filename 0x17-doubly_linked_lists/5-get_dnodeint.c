#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a dlistint_t linked list.
 * @head: head of node
 * @index: is the index of the node
 * Return: data of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
