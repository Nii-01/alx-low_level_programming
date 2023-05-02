#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list of type listint_t
 * @head: pointer to the first node in the list
 * @n: an integer value to be stored in the new node
 * This function creates a new node with the given integer value @n and adds it to the
beginning of the linked list pointed to by @head. If @head is NULL, a new list is
created with the new node as the first (and only) element
 *
 * Return: a pointer to the new node added to the list, or NULL if it fails to allocate memory to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
