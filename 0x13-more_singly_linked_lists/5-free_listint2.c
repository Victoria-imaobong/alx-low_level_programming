#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
