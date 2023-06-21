#include "monty.h"

/**
 * divide -function that  divides the top two elements of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void divide(stack_t **s, unsigned int ln)
{
	int divs;

	if ((*s) == NULL || (*s)->next == NULL)
	{
		fprintf(stdout, "L%d: can't div, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	if ((*s)->n == 0)
	{
		fprintf(stdout, "L%d: division by zero\n", ln);
		exit(EXIT_FAILURE);
	}
	divs = (*s)->next->n / (*s)->n;
	pop(s, ln);
	(*s)->n = divs;
}
