#include "lists.h"
/**
 * list_len -  a function that returns the number
 * of elements in a linked list_t list
 * @h: struct
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
