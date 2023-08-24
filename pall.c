#include "monty.h"
/**
 * f_pall - This function prints the stack
 * @head: The head
 * @counter: line number
 * Return: does not return
 *
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
