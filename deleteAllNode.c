#include "liblist.h"

void	dellAllNode(Node **head)
{
	Node *curr = *head;
	Node *temp;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
