#include "monty.h"

/**
 * m_queue - Sets the format of the data to a queue (FIFO)
 * @stack: The double pointer to the beginning of the stack
 * @line_number: The script's line number
 *
 * Return: void
 */
void m_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = QUEUE;
}


