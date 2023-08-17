#include "lists.h"

/**
 * free_dlistint -> return none
 * @head:..
 * Return: nnone
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pt;

	if (head == NULL)
		return;
	pt = head;
	while (pt != NULL)
	{
		free(pt);
		pt = pt->next;
	}
}
