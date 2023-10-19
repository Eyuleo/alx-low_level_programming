#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (node_count);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
