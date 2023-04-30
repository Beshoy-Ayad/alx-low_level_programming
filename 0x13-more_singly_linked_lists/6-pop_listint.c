#include"lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the listint_t list
 * Return: the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
