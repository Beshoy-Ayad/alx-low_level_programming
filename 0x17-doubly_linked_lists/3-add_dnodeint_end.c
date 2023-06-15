#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @tail: pointer to the pointer to the tail of the list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, dlistint_t **tail, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		*tail = new;
		return (new);
	}

	new->prev = *tail;
	(*tail)->next = new;
	*tail = new;

	return (new);
}
