#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of pointer the head/next node
 * Return: elements of the str new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node = malloc(sizeof(listint_t));

    if (!head || !node)
        return (NULL);

	node->n = n;
	node->next = NULL;
	if(!head)
		head = node;
	else
	{
		listint_t *LastNode = *head;
		while (LastNode->next)
			LastNode = LastNode->next;
		LastNode->next = node;
	}
	return (node);
}