#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);

}
