#include <stdio.h>

struct _SingleList {
	double Item;
	struct _SingleList *Next;
};

typedef struct _SingleList SingleList;

void PrintList(SingleList *Node);

void InsertNodeAfter(SingleList *Node, SingleList *Insert);
void RemoveNodeAfter(SingleList *Node);

void RemoveAtRoot(SingleList *Root);
void InsertAtRoot(SingleList *Root, SingleList *NewRoot);
