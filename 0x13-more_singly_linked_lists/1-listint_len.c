#include "lists.h"
/**
  * listint_len - list element in linked list
  *
  * @h: point to struct
  * Return: elements
  */
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
