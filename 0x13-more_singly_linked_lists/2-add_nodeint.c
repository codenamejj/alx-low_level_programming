#include "lists.h"
/**
  * add_nodeint - add new node
  * @head: first node(initial)
  * @n: constant integer
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	if (newNode)
		return (newNode);
	else
		return (NULL);
}
