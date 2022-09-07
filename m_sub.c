#include "monty.h"

/**
 * m_sub - Subtracts the top element of stack from next element and push result
 * @stack: The double pointer to the head of stack
 * @line_number: The line number of the current operation
 *
 * Return: void
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n -= n;
}


