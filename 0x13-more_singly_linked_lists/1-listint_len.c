#include "lists.h"
/**
 *
 * listint_len : returns the number of elements in a linked listint_t list.
 * @h - pointer to the head node
 * @return - on succes returns number of elements
 *
**/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}