#include "monty.h"
/**
 * pchar - That function prints the char at a the top
 * @s: monty stack
 * @ln: line number to grab
 */
void pchar(stack_t **s, unsigned int ln)
{
	if ((*s) == NULL)
	{
		fprintf(stdout, "L%d: can't pchar, s empty\n", ln);
		exit(EXIT_FAILURE);
	}
	if (!isprint((*s)->n))
	{
		fprintf(stdout, "L%d: can't pchar, value out of range\n", ln);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", (*s)->n);
}

