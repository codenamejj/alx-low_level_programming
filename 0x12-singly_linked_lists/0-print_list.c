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
	int count = 0;

	while (h)
	{	
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}

