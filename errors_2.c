#include "monty.h"

int short_stack_error(unsigned int number_line, char *op);
int div_error(unsigned int number_line);
int pop_error(unsigned int number_line);
int div_error(unsigned int number_line);
int pchar_error(unsigned int number_line, char *message);

/**
 * pop_error - Prints pop error messages for empty stacks.
 * @number_line: Line number in script where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int number_line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", number_line);
	return (EXIT_FAILURE);
}


int pint_error(unsigned int number_line)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", number_line);
	return (EXIT_FAILURE);
}


int short_stack_error(unsigned int number_line, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", number_line, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints division error messages for division by 0.
 * @number_line: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int div_error(unsigned int number_line)
{
	fprintf(stderr, "L%u: division by zero\n", number_line);
	return (EXIT_FAILURE);
}


int pchar_error(unsigned int number_line, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", number_line, message);
	return (EXIT_FAILURE);
}
