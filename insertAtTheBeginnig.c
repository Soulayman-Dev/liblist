#include "liblist.h"

void	insertAtTheBeginnig(Node **head, int value)
{
	Node *new;
	new = malloc(sizeof(Node));
	new->x = value;
	new->next = NULL;
	new->next = *head;
	*head = new;
}
