#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: Pointer to a head
 * @number: Number to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *prev;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	prev = *head;

	if (prev->n > number)
	{
		new->next = prev;
		*head = new;
		return (new);
	}

	for (; prev->next && prev->next->n < number ;)
		prev = prev->next;

	new->next = prev->next;
	prev->next = new;

	return (new);
}
