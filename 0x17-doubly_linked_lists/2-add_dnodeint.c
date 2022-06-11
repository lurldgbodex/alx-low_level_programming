#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint
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
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
