#include "monty.h"

/**
 * m_add - Adds the top two elements of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: The script line number
 *
 * Return: void
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n += n;
}


