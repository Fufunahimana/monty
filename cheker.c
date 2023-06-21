#include "monty.h"

/**
 * is_int - that function checks 
 * if a string is valid for atoi
 * @s: the string
 *
 * Return: 1 for true, 0 for false
 */
int is_int(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	if (*s == '-')
		i++;
	for (; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
