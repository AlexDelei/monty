#include "monty.h"
/**
 * execute_instruction - executes the given instruction
 * @stack: pointer to the stack
 * @instruction: opcode to execute
 * @line_number: line number of the opcode in the Monty file
 */
void execute_instruction(stack_t **stack, char *instruction, unsigned int line_number)
{
	if (strcmp(instruction, "push") == 0)
		push(stack, line_number);
	else if (strcmp(instruction, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(instruction, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(instruction, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(instruction, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(instruction, "add") == 0)
		add(stack, line_number);
	else if (strcmp(instruction, "nop") == 0)
		nop(stack, line_number);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, instruction);
		exit(EXIT_FAILURE);
	}
}
