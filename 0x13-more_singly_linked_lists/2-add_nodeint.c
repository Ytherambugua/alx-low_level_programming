#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * @head: Pointer to a pointer of a struct constant
 * @n: int constant
 * Return: The number of nodes
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = *(head);
	*head = NewNode;

return (NewNode);
}
