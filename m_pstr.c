#include "monty.h"
#include <ctype.h>

/**
 * m_pstr - Prints string from stack of ints up to null byte,
 * first non-ascii character, or the end of stack
 * @stack: Double pointer to head of stack
 * @line_number: The line number of the current operation
 *
 * Return: void
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ch;

	(void)line_number;

	temp = *stack;
	while (temp != NULL)
	{
		ch = temp->n;
		if (!isascii(ch) || ch == 0)
			break;
		putchar(ch);
		temp = temp->next;
		if (temp == *stack)
			break;
	}
	putchar('\n');
}


