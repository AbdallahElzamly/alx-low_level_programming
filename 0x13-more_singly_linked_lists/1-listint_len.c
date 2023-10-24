#include "lists.h"

/**
 * listint_len - returns the number of elements in
<<<<<<< HEAD
 * a linked list.
=======
 *
 * a linked list.
 *
>>>>>>> 6e5602c75f1fd43758aabea8ff12e5896f67a3ab
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 **/
size_t listint_len (const listint_t *h)
{
    size_t nnodes = 0;

<<<<<<< HEAD
	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
=======
    while (h)
    {
        h = h -> next;
        nnodes++;
    }
    return (nnodes);
>>>>>>> 6e5602c75f1fd43758aabea8ff12e5896f67a3ab
}
