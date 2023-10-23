#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
// #include "lists.h"

// /**
//  * add_nodeint_end - Adds a node at the end of a listint_t.
//  * @n: data type pointer of struct
//  * @head: data type pointer of pointer the head/next node
//  * Return: elements of the str new_node
//  */
// listint_t *add_nodeint_end(listint_t **head, const int n)
// {
//     listint_t *new_node = malloc(sizeof(listint_t));
	
// 	listint_t *node;

//     if (new_node == NULL)
// 		return (NULL);

// 	new_node->next = NULL;
// 	new_node->n = n;
// 	if (*head == NULL)
// 	{
// 		*head = new_node;
// 	}
// 	else
// 	{
// 		node = *head;
// 		while (node->next != NULL)
// 			node = node->next;
// 		node->next = new_node;
// 	}
// 	return (new_node);
// }