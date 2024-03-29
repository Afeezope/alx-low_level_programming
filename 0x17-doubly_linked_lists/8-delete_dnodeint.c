#include "lists.h"

/**
*delete_dnodeint_at_index -  deletes the node at index
*index of a dlistint_t linked list
*@head: pointer to head of list
*@index: index of the node that should be deleted
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		temp = temp->next;

		if (temp == NULL)
			return (-1);
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
