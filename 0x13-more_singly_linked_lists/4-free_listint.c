#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
<<<<<<< HEAD
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
=======
	listint_t *nod;

	while (head != NULL)
	{
		nod = head;
        head = head->next;
        free(nod);
	}
}
>>>>>>> 6e5602c75f1fd43758aabea8ff12e5896f67a3ab
