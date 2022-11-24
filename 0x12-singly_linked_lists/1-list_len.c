#include "lists.h"

/**
 * list_len - Find the number of elements in
 * a linked list_t list.
 * @n: The linked list_t list
 * Return: The number of eleents in h.
 */

size_t list_len(const list_t *h)
{
	size_t elenets = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
