#include "monty.h"
/**
 * pall - prints all the values on the stack
 * @stack: pointer to the stack
 * @line_number: line number of the opcode in the Monty file
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
