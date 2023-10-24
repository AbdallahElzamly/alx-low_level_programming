#include "lists.h"
#include<stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: the head of linklist node
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t countr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countr++;
	}
	return (countr);
}
