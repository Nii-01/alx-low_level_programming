#include "lists.h"

/**
 * free_listint2 - frees a linked list of type listint_t and sets the head pointer to NULL
 * @head: pointer to the first node in the list to be freed
 * This function frees all the memory allocated to the linked list pointed to by @head. It starts by traversing the linked list starting from the first node pointed to by @head, and frees the memory for each node one by one until it reaches the end of the list. After all the memory has been freed, it sets the @head pointer to NULL to indicate that the list is empty
 *If @head is NULL, this function does nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
