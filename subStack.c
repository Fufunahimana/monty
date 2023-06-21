#include "monty.h"

/**
 * sub - That function subtracts the
 * top two elements of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void sub(stack_t **s, unsigned int ln)
{
	int diff;

	if ((*s) == NULL || (*s)->next == NULL)
	{
		fprintf(stdout, "L%d: can't sub, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}

	diff = (*s)->next->n - (*s)->n;
	pop(s, ln);
	(*s)->n = diff;
}
