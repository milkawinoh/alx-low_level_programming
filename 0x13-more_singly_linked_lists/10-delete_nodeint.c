#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	size_t count = 0;


	while(head != NULL)
	{
		if (count == index)
		{
			prev = *head;
			temp = *prev ->next
			*head = (*head)->next;

			prev -> next = (*head) ->next;
			temp = (*head)
			

			prev->next = temp ->next


		}
		else
		{
			head = head->next;

		}
		
	}
	return (-1);

}