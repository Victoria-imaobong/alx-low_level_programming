#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;

	if (*h == NULL)
		return (0);

	while (*h)
	{
		free(*h);
		*h = (*h)->next;
		(*h)->next = new;
	}

	*h = NULL;

	return (0);
}
