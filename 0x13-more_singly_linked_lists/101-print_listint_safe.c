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
	listint_t *slow_pointer, *fast_pointer;

	if (head == NULL)
		return (0);
	slow_pointer = head;
	fast_pointer = head;

	while (slow_pointer && fast_pointer && fast_pointer->next)
	{
		printf("%d\n", slow_pointer->n);
		count++;
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;

		if (slow_pointer == fast_pointer)
		{
			fprintf(stderr, "Linked list contains a loop. Exiting with status 98.\n");
			exit(98);
		}
	}
	return (count);

}
