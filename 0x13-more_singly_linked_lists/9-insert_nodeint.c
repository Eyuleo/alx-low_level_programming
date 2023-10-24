#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the node
 * @idx: index of the list
 * @n: value to be added
 *
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *current;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	count = 0;
	while (count < idx - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);

}
