#include "lists.h"
/**
 *
 * print_listint : prints all the elements of a listint_t list
 * @count - keeps track on the number of elements in the list
 * @temp - temporary pointer to the current node
 * return -number of elements in the list
 *
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

   while (temp != NULL)
   {
	   count++;
	   printf("%d\n", temp->n);
	   temp = temp->next;
   }
   return (count);

}
