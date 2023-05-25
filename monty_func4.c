#include "monty.h"

void monty_rotl(stack_t **stack, unsigned int number_line);
void monty_rotr(stack_t **stack, unsigned int number_line);
void monty_stack(stack_t **stack, unsigned int number_line);
void monty_queue(stack_t **stack, unsigned int number_line);

/**
 * monty_rotl - Rotates the top value of a stack_t linked list to the bottom.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @number_line: The current working line number of a Monty bytecodes file.
 */
void monty_rotl(stack_t **stack, unsigned int number_line)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;

	(void)number_line;
}

void monty_rotr(stack_t **stack, unsigned int number_line)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	bottom->prev->next = NULL;
	(*stack)->next = bottom;
	bottom->prev = *stack;
	bottom->next = top;
	top->prev = bottom;

	(void)number_line;
}

void monty_stack(stack_t **stack, unsigned int number_line)
{
	(*stack)->n = STACK;
	(void)number_line;
}

/**
 * monty_queue - Converts a stack to a queue.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @number_line: The current working line number of a Monty bytecodes file.
 */
void monty_queue(stack_t **stack, unsigned int number_line)
{
	(*stack)->n = QUEUE;
	(void)number_line;
}
