#include "lists.h"
/**
 * sum_listint - returns the sum of all the data a linked list.
 * @head: head of the node
 *
 * Return: 0 or the sum of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
