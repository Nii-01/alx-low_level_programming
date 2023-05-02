#include "lists.h"

/**
 * add_nodeint_end - adds a new node with the given integer value to the end of a linked list
 * @head: pointer to the first node in the list
 * @n: an integer value to be stored in the new node. This function creates a new node with the given integer value @n and adds it to the end of the linked list pointed to by @head. If @head is NULL, a new list is created with the new node as the first (and only) element
 *
 * Return: pointer to the new node, or NULL if it fails to allocate memory for the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
