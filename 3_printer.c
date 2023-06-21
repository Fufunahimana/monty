#include "monty.h"
/**
 * pstr - Function that prints the string of list
 * @s: monty stack
 * @ln: line number to grab
 */
void pstr(stack_t **s, unsigned int ln)
{
	stack_t *tmp;

	tmp = *s;
	UNUSED(ln);
	while (tmp != NULL && tmp->n != 0 && isprint(tmp->n))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
