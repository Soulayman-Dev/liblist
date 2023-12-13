#ifndef LIBLIST_H
#define LIBLIST_H

#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node *next;
} Node;

void	insertAtTheBeginnig(Node **head, int value);
void	insertAtTheEnd(Node **head, int value);
void	deleteFromBeginning(Node **head);
void	deleteFromEnd(Node **head);
void	deleteAllNode(Node **root);

#endif
