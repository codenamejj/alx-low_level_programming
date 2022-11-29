#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * list_len - print list
  * @h: points to constant
  * Return: number of elements in linked list
  *
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
