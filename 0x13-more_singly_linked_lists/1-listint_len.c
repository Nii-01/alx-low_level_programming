#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list of type listint_t
 * @h: a pointer to the head of the linked list to traverse
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
