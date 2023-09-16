#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t*nextnode;

	prev = NULL;
	

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextnode;
		

	}
	*head = prev;
	return *head;

	



}