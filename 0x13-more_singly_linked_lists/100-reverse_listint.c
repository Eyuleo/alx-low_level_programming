#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of the node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
