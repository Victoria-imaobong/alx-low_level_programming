#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head of node
 * Return: free the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
