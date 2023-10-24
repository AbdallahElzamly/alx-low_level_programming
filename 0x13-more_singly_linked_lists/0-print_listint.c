#include "lists.h"
#include<stdio.h>

/**
 * print_listint - prints a linked lists
 *
 * @h: pointer to the first node
 *
 * Return: size of the list
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
