#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	ulistint_t *temp;
	nsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
