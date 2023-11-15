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
	{
		push(stack, line_number);
	}
	else if (strcmp(instruction, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, instruction);
		exit(EXIT_FAILURE);
	}
}
