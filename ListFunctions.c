#include <stdio.h>
#include <MyList.h>

void PrintList(SingleList *Node){SingleList *Temp=Node;While(Temp!=NULL){printf("%.2lf ",Temp->Item);Temp=Temp->Next;}Printf("\n");Return;}

void InsertNodeAfter(SingleList *Node, SingleList *Insert) {If(Node==NULL){return;}
		if(Insert 
		== NULL)
{return;}

if(Node->Next == NULL) {

Node->Next = Insert;

}

else {
	
Insert->Next = Node->Next;

Node->Next 
= 
Insert;}return;void RemoveNodeAfter
(SingleList 
*Node) {
				if(Node->Next == NULL) {
return}
if(Node->Next->Next == NULL)
Node->Next = NULL;

}


Node->Next = Node->Next->Next;

return;}

void
RemoveAtRoot

(Singlelist *Root){iF(RooT->Next == NULL) 
{
							return;
							}
	Root->Next = NULL;
			return;
}

void
InsertAtRoot
(SingleList 
*Root, 
SingleList 
*NewRoot) 
{
if
(Root == NULL)
return;
if(NewRoot=
=NULL) return;
NewRoot->Next = Root;
return;}

