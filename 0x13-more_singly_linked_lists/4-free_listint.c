#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: a pointer of the firsst node in thee list to be freed
 * This function frees all the memory allocated to the linked list pointed to by @head.
It starts by traversing the linked list starting from the first node pointed to by @head,
and frees the memory for each node one by one until it reaches the end of the list.
Note that after calling this function, the @head pointer will be set to NULL, since all
the nodes in the list have been freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
