#include "lists.h"
/**
  * print_listint - prints all the elements of a listint_t list
  *
  * @h: constant pointer to struct
  * Return: elements
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		
		count++;
		h = h->next;
	}
	return (count);
}


