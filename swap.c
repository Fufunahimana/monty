#include "monty.h"

/**
 * swap - That function swaps
 * the top two elements of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void swap(stack_t **s, unsigned int ln)
{
	int swapper;

	if ((*s) == NULL)
	{
		fprintf(stdout, "L%d: can't swap, s too short\n", ln);
		exit(EXIT_FAILURE);
	}
	if ((*s)->next == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	swapper = (*s)->n;
	(*s)->n = (*s)->next->n;
	(*s)->next->n = swapper;
}

