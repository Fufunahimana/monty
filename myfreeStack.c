#include "monty.h"

/**
 * free_stack - that function frees a stack_t list.
 * @h: a pointer to the head
 *
 * Return: void
 */
void free_stack(stack_t *h)
{
	stack_t *next;

	if (!h)
		return;

	next = h;
	while (next)
	{
		h = next;
		next = h->next;
		free(h);
	}
}
