#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of a linked list
 * @str: string
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new->len = 1;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
