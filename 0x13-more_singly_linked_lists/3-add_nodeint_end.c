#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to pointer to struct
  *
  * @n: constant
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *new_head;

	new_head = *head;

	end_node = malloc(sizeof(listint_t));
	if (end_node != NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	while (new_head != NULL)
	{
		new_head = new_head->next;
	}

	new_head->next = end_node;

	return (*head);
}
