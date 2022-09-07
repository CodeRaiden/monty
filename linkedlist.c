#include "monty.h"

/**
 * add_node - Adds a new node to a circular linked list
 * @stack: The double pointer to the beginning of the circular linked list
 * @n: The value to add to the new node
 *
 * Description: The function will add node to the begining if in
 * stack mode, and end if in queue mode
 *
 * Return: The pointer to the new node, or NULL on failure
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new;

	if (stack == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*stack == NULL)
	{
		new->prev = new;
		new->next = new;
	}
	else
	{
		(*stack)->prev->next = new;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		new->next = *stack;
	}
	if (var.queue == STACK || var.stack_len == 0)
		*stack = new;
	return (new);
}


