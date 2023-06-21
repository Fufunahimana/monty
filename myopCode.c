#include "monty.h"

/**
 * get_opcode - function for getting the opcode
 * and sets push_arg if it's push
 * @lc: the line of code
 *
 * Return: the opcode
 */
char *get_opcode(char *lc)
{
	char *opcode;

	/** grabs first argument **/
	opcode = strtok(lc, "\n\t ");
	return (opcode);
}
