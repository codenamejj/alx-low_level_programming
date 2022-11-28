#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_list - print list
  * @h: points to constant
  * Return: number of nodes
  *
  */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
	}
	
	return (nodes);
}

