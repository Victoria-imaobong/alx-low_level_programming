#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 * @head: double pointer to head of node
 * @n: node data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_node, *new_node;

	if (head  == NULL)
		return (NULL);

	new_node = malloc(size_of(dlistint_t));
	if (new_node == NULL)
		return (null);
	new_node->n = n;
	new_node->next = NULL;

	temp_node = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = new_node;
	new_node->prev = temp_node;

	return (new_node);
}
