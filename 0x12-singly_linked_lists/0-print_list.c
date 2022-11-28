#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
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
			str++;
			count++;
		}
		return (count);

			printf("[%d] %s\n", count, h->str);
			h = h->next;

		else if (h->str == NULL)
			print("[0] (nil)\n")
	}
	return (0);
}
