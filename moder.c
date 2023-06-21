#include "monty.h"

/**
 * moddy - That function mods the top two elements of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void moddy(stack_t **s, unsigned int ln)
{
	int modd;

	if ((*s) == NULL || (*s)->next == NULL)
	{
		fprintf(stdout, "L%d: can't mod, s too short\n", ln);
		exit(EXIT_FAILURE);
	}
	if ((*s)->n == 0)
	{
		fprintf(stdout, "L%d: division by zero\n", ln);
		exit(EXIT_FAILURE);
	}

	modd = (*s)->next->n % (*s)->n;
	pop(s, ln);
	(*s)->n = modd;
}

