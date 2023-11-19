#include "monty.h"
/**
 *is_string - checks if inout is string
 *@input:input
 *Return: 1
 *
 */
int is_string(const char *input)
{
	while (*input)
	{
		if (!isprint((unsigned char)*input))
			return (0);
		++input;
	}
	return (1);
}
