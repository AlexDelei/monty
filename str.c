#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the opcode in the Monty file
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL && current->n != 0 && is_ascii(current->n))
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}
