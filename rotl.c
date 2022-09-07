#include "monty.h"

/**
 * rotl - Rotates stack to the top.
 * @stack: The double pointer to the begining of the linked list
 * @line_number: The script's line number
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->next;
}


