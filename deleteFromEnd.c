#include "liblist.h"

void	deleteFromEnd(Node **head)
{
	Node *temp;

	temp = *head;
	while(temp->next->next != NULL)
		temp = temp->next;
	free(temp->next);
	temp->next = NULL;
}
