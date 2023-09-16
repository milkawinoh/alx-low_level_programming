#include "lists.h"

/**
 * pop_listint - Removes the first node of a listint_t linked list
 *               and returns its value.
 * @head: Pointer to a pointer to the head node of the linked list.
 *
 * Return: The value of the removed node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	value = temp->n;

	free(temp);
	return (value);
}
