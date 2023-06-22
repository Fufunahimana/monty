#include "monty.h"
/**
 * rotl - Function that rotates to the left
 * @s: monty stack
 * @ln: line number
 */
void rotl(stack_t **s, unsigned int ln)
{
	stack_t *tmp;
	int firstVal;

	UNUSED(ln);
	tmp = *s;
	if (tmp)
		firstVal = tmp->n;
	while (tmp != NULL)
	{
		if (tmp->next)
			tmp->n = tmp->next->n;
		else
			tmp->n = firstVal;
		tmp = tmp->next;
	}
}

