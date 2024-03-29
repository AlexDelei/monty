#ifndef MONTY_H
#define MONTY_H
#define MAX_LINE_LENGTH 1024
#define EXIT_FAILURE 1

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
	int mode;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void free_stack(stack_t *stack);
int is_string(const char *input);
void queue(stack_t **stack, unsigned int line_number);
void shtack(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, const char *value, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_op(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
int is_ascii_printable(int value);
int is_ascii(int c);
void pchar(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void execute_instruction(stack_t **stack, char *instruction, int value, unsigned int line_number);
#endif
