#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of a node
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		val = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (val);
}
