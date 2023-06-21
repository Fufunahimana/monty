#include "monty.h"

/**
 * add - this function adds the top two elements of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void add(stack_t **s, unsigned int ln)
{
	int summ;

	if ((*s) == NULL || (*s)->next == NULL)
	{
		fprintf(stdout, "L%d: can't add, s too short\n", ln);
		exit(EXIT_FAILURE);
	}

	summ = (*s)->next->n + (*s)->n;
	pop(s, ln);
	(*s)->n = summ;
}

