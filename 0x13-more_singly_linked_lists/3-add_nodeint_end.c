#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of pointer the head/next node
 * Return: elements of the str new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

    if (!*head || !*new_node)
        return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if(!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}