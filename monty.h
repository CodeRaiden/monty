#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct var_s - Struct to contain the main variables of the Monty interpreter
 * @queue: Flag that determines if in stack vs queue mode
 * @stack_len: The length of stack
 */
typedef struct var_s
{
	int queue;
	size_t stack_len;
} var_t;

#define STACK 0
#define QUEUE 1

/* The global struct to hold flag for queue and stack length */
extern var_t var;

/**
 * struct stack_s - Doubly linked list representation of a stack or queue
 * @n: integer
 * @prev: Points to previous element of the stack or queue
 * @next: Points to the next element of the stack or queue
 *
 * Description: Doubly linked list's node structure
 * for stack, queues, LIFO, FIFO alx project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Opcoode and its function
 * @opcode: The opcode
 * @f: The function to handle the opcode
 *
 * Description: Opcode and its function
 * for stack, queues, LIFO, FIFO alx project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void get_op(char *op, stack_t **stack, unsigned int line_number);
void m_push(stack_t **stack, unsigned int line_number);
void m_push2(stack_t **stack, int n);
void m_pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void m_pop(stack_t **stack, unsigned int line_number);
void m_swap(stack_t **stack, unsigned int line_number);
void m_add(stack_t **stack, unsigned int line_number);
void m_nop(stack_t **stack, unsigned int line_number);
void m_sub(stack_t **stack, unsigned int line_number);
void m_mul(stack_t **stack, unsigned int line_number);
void m_div(stack_t **stack, unsigned int line_number);
void m_mod(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void m_stack(stack_t **stack, unsigned int line_number);
void m_queue(stack_t **stack, unsigned int line_number);
void m_pchar(stack_t **stack, unsigned int line_number);
void m_pstr(stack_t **stack, unsigned int line_number);
void free_stack(int status, void *arg);
void m_fs_close(int status, void *arg);
void free_lineptr(int status, void *arg);
stack_t *add_node(stack_t **stack, const int n);

#endif /* _MONTY_H_ */


