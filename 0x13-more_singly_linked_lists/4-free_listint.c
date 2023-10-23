#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: head of the node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
