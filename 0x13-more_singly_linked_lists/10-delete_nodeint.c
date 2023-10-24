#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the node
 * @index: index of node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (count < index - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
