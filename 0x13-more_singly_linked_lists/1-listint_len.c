#include "lists.h"
/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: head
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	if (!h)
		return (0);

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}
