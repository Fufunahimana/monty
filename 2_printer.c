#include "monty.h"

/**
 * pint - Function that prints the value at
 * the top of the stack, followed by a new line.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void pint(stack_t **s, unsigned int ln)
{
	if (*s == NULL)
	{
		fprintf(stdout, "L%d: can't pint, s empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*s)->n);
}
