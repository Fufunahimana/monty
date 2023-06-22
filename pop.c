#include "monty.h"

/**
 * pop - Function that removes the top element of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void pop(stack_t **s, unsigned int ln)
{
	stack_t *tmp;

	if ((*s) == NULL)
	{
		fprintf(stdout, "L%d: can't pop an empty s\n", ln);
		exit(EXIT_FAILURE);
	}

	tmp = *s;
	*s = (*s)->next;
	free(tmp);
}

