#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && index != count)
	{

		head = head->next;
		count++;
	}
	if (index > count)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}
	return (head);

}
