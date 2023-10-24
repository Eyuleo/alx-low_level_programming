#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head of the node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow_pointer;
	const listint_t *fast_pointer;

	if (head == NULL)
		return (0);
	slow_pointer = head;
	fast_pointer = head->next;
	while (fast_pointer != NULL && fast_pointer < slow_pointer)
	{
		count += 1;
		printf("[%p] %i\n", (void *)slow_pointer, slow_pointer->n);
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next;
	}
	printf("[%p] %i\n", (void *)slow_pointer, slow_pointer->n);
	count += 1;
	if (fast_pointer)
		printf("-> [%p] %i\n", (void *)fast_pointer, fast_pointer->n);
	return (count);
}
