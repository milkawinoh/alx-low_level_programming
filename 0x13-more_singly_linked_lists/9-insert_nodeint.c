#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t*temp;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return NULL;
	}
	newnode->n = n;
	temp = (*head);

	while (temp != NULL)
	{
		if (count == idx)
		{
			newnode = temp->next;
			temp = newnode;

			if (newnode == NULL)
			{
				return NULL;
			}


		}
		else
		{
			count++;
			temp = temp ->next;
		}

	}
	return (newnode);

}