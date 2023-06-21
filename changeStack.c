#include "monty.h"
/**
 * stack - That function changes to LIFO
 * @s: monty stack
 * @ln: line number of file
 */
void stack(stack_t **s, unsigned int ln)
{
	UNUSED(s);
	UNUSED(ln);
	SQ = 1;
}
/**
 * queue - changes to FIFO
 * @stack: monty stack
 * @line_number: line number of file
 */
void queue(stack_t **s, unsigned int ln)
{
	UNUSED(s);
	UNUSED(ln);
	SQ = 0;
}
