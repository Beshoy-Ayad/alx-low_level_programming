#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	slow = *h;
	fast = (*h)->next;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			temp = slow->next;
			free(slow);
			count++;
			slow = temp;
			while (slow != fast)
			{
				temp = slow->next;
				free(slow);
				count++;
				slow = temp;
			}
			*h = NULL;
			return (count);
		}
		temp = slow->next;
		free(slow);
		count++;
		slow = temp;
		fast = fast->next->next;
	}
	while (slow != NULL)
	{
		temp = slow->next;
		free(slow);
		count++;
		slow = temp;
	}
	*h = NULL;
	return (count);
}
