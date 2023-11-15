#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the opcode in the Monty file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *next_node = top->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top->next = next_node->next;
	if (next_node->next != NULL)
	{
		next_node->next->prev = top;
	}
	next_node->prev = NULL;
	next_node->next = top;
	top->prev = next_node;

	*stack = next_node;
}
