#include "monty.h"
/**
 * rotr - Function that rotates to the right
 * @s: monty stack
 * @ln: line number
 */
void rotr(stack_t **s, unsigned int ln)
{
	stack_t *tmp;
	int lastVal;

	UNUSED(ln);
	if ((*s) != NULL)
	{
		tmp = *s;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		lastVal = tmp->n;
		while (tmp->prev != NULL)
		{
			tmp->n = tmp->prev->n;
			tmp = tmp->prev;
		}
		tmp->n = lastVal;
	}
}
