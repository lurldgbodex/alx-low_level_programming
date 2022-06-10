#include "lists.h"

/**
 * add_dnoteint - adds a new node at the beginning of a dlistint
 * @head: pointer to pointer to the list
 * @n: data to insert in new node
 *
 * Return: Adress of the new element or null if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	*head->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
