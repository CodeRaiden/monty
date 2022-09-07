#include "monty.h"

/**
 * m_mul - Multiplies the top two elements of stack and push the result
 * @stack: The double pointer to head of stack
 * @line_number: The line number of the current operation
 *
 * Return: void
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n *= n;
}


