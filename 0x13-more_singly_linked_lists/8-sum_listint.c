#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Sums every int of every node
 * @head: pointer to a struc
 *
 * Return: Returns the sum
**/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	ptr = head;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
