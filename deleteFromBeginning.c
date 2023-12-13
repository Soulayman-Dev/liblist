#include "liblist.h"

void	deleteFromBeginning(Node **head)
{
	Node *temp;
	if (head == NULL || *head == NULL)
		return;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
