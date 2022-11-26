#include <stdio.h>
#include "lists.h"

/**
*list_len - function that prints the length of list
*
*@h: pointer to the first node of a list
*
*Return: 0
*/

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
	{
		return (0);
	}

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to next nose*/
		h = h->next;

		/*count the nodes*/
		node_count += 1;
	}
	return (node_count);
}
