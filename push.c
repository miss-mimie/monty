#include "monty.h"

/**
 * push - This push an integer(element) onto the stack
 * @stack: This points to the head of the stack
 * (doubly linked list)
 * @line_number: The line number in the bytecode file
 * @n: The integer(element) to be pushed
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
stack_t *added_element;

(void)line_number; /* unused linenumber in function */

added_element = malloc(sizeof(stack_t));
if (added_element == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

added_element->n = n;
added_element->prev = NULL;
added_element->next = *stack;

if (*stack != NULL)
	(*stack)->prev = added_element;

	*stack = added_element;
	}
