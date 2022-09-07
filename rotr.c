#include "monty.h"

/**
 * rotr - Rotates stack to the bottom.
 * @stack: The double pointer to begining of the linked list
 * @line_number: The script's line number
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->prev;
}


