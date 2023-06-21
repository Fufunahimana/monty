#include "monty.h"

/**
 * pall - That function prints all values
 * on the stack, starting from the top of the stack.
 * @s: the stack
 * @ln: the current line number
 *
 * Return: void
 */
void pall(stack_t **s, unsigned int ln)
{
	stack_t *tmp;

	UNUSED(ln);

	tmp = *s;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
