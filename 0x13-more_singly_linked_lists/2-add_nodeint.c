#include "lists.h"
/**
  * add_nodeint - add new node
  * @head: first node(initial)
  * @n: constant integer
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	

	new_head->next = *head;
	new_head->n = n;
	*head = new_head;

	return (new_head);
}	
