#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: head
 * @index: index of the node, starting at 0
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}

	return (head);
}

