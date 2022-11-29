#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
  * add_node - add node
  * @str: points to constant
  * Return: new node address
  *
  */
list_t *add_node(list_t **head, const char *str)
{
	char *newStr;

	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	*newStr = strdup(const char str);

	newNode->newStr = newStr;
	newNode->next = *head;


	if (newNode)
		return(newNode);
	else
		return (NULL);
}
