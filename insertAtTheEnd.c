#include "liblist.h"

void	insertAtTheEnd(Node **head, int value)
{
	Node *new;
	Node *temp;
	new = malloc(sizeof(Node));
	new->x = value;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return;
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
