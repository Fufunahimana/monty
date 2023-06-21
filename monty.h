#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define LINE_MAX 1024

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **s, unsigned int ln);
} instruction_t;

extern int SQ;
instruction_t *parse_line(char *line);
void free_stack(stack_t *head);
char *get_opcode(char *string);
int is_int(char *str);
void push(stack_t **s, unsigned int ln);
void pall(stack_t **s, unsigned int ln);
void pint(stack_t **s, unsigned int ln);
void pop(stack_t **s, unsigned int ln);
void swap(stack_t **s, unsigned int ln);
void add(stack_t **s, unsigned int ln);
void nop(stack_t **s, unsigned int ln);
void sub(stack_t **s, unsigned int ln);
void divide(stack_t **s, unsigned int ln);
void multiply(stack_t **s, unsigned int ln);
void moddy(stack_t **s, unsigned int ln);
void pchar(stack_t **s, unsigned int ln);
void pstr(stack_t **s, unsigned int ln);
void rotl(stack_t **s, unsigned int ln);
void rotr(stack_t **s, unsigned int ln);
void stack(stack_t **s, unsigned int ln);
void queue(stack_t **s, unsigned int ln);
#endif

