#include "monty.h"

/**
 * m_pall - Prints all values on stack, starting from top
 * @stack: The double pointer to the head of the stack
 * @line_number: The line number being executed from the script file
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}


