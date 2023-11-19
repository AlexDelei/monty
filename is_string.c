#include "monty.h"
/**
 *is_string - checks if inout is string
 *@input:input
 *Return: 1
 *
 */
int is_string(const char *input)
{
	size_t i;

	for (i = 0; i < strlen(input); i++)
	{
		if (!isalnum(input[i]))
		{
			return (1);
		}
	}
	return (0);
}
