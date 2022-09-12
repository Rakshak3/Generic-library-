#ifndef __TM_DLL__C
#define __TM_DLL__C 123
#include<tm_dll.h>
#include<stdio.h>
#include<stdlib.h>

DoublyLinkedList * createDoublyLinkedList(bool *success)
{
DoublyLinkedList *doublyLinkedList;
if(success) *success=false;
doublyLinkedList=(DoublyLinkedList *)malloc(sizeof(DoublyLinkedList));
if(doublyLinkedList==NULL) return NULL;
doublyLinkedList->start=NULL;
doublyLinkedList->end=NULL;
doublyLinkedList->size=0;
if(success) *success=true;
return doublyLinkedList;
}
void addToDoublyLinkedList(DoublyLinkedList *doublyLinkedList,void *ptr,bool *success)
{
DoublyLinkedListNode *node;
if(success) *success=false;
if(doublyLinkedList==NULL) return;
node=(DoublyLinkedListNode *)malloc(sizeof(DoublyLinkedListNode));
if(node==NULL) return;
node->ptr=ptr;
node->previous=NULL;
node->next=NULL;
if(doublyLinkedList->start==NULL)
{
doublyLinkedList->start=node;
doublyLinkedList->end=node;
}
else
{
doublyLinkedList->end->next=node;
node->previous=doublyLinkedList->end;
doublyLinkedList->end=node;
}
if(success) *success=true;
doublyLinkedList->size++;
}
void destroyDoublyLinkedList(DoublyLinkedList *doublyLinkedList)
{
if(doublyLinkedList==NULL) return;
clearDoublyLinkedList(doublyLinkedList);
free(doublyLinkedList);
}
void insertIntoDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,void *ptr,bool *success)
{
DoublyLinkedListNode *t,*p1;
int x=0;
if(success) *success=false;
if(doublyLinkedList==NULL) return;
if(index<0 && index>getSizeOfDoublyLinkedList(doublyLinkedList)) return;
if(index==getSizeOfDoublyLinkedList(doublyLinkedList))
{
addToDoublyLinkedList(doublyLinkedList,ptr,success);
if(success) *success=true;
return;
}
t=(DoublyLinkedListNode *)malloc(sizeof(DoublyLinkedListNode));
if(t==NULL) return;
t->ptr=ptr;
t->previous=NULL;
t->next=NULL;
if(index==0)
{
t->next=doublyLinkedList->start;
doublyLinkedList->start->previous=t;
doublyLinkedList->start=t;
if(success) *success=true;
doublyLinkedList->size++;
return;
}
p1=doublyLinkedList->start;
while(x<index)
{
p1=p1->next;
x++;
}
t->next=p1;
p1->previous=t;
t->previous=p1->previous;
p1->previous->next=t;
doublyLinkedList->size++;
if(success) *success=true;
}
void * removeFromDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,bool *success);
int getSizeOfDoublyLinkedList(DoublyLinkedList *doublyLinkedList)
{
if(doublyLinkedList==NULL) return 0;
return doublyLinkedList->size;
}


void clearDoublyLinkedList(DoublyLinkedList *doublyLinkedList)
{
DoublyLinkedListNode *node;
if(doublyLinkedList==NULL) return;
node=doublyLinkedList->start;
while(doublyLinkedList->start)
{
node=doublyLinkedList->start;
doublyLinkedList->start=doublyLinkedList->start->next;
free(node);
}
doublyLinkedList->end=NULL;
doublyLinkedList->size=0;
}

void appendToDoublyLinkedList(DoublyLinkedList *targetDoublyLinkedList,DoublyLinkedList *sourceDoublyLinkedList,bool *success);
void * getFromDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,bool *success)
{
DoublyLinkedListNode *p1;
void *ptr;
int x=0;
if(success) *success=false;
if(doublyLinkedList==NULL) return NULL;
if(index<0 && index>=getSizeOfDoublyLinkedList(doublyLinkedList)) return NULL;
p1=doublyLinkedList->start;
while(x<index)
{
p1=p1->next;
x++;
}
ptr=p1->ptr;
if(success) *success=true;
return ptr;
}
DoublyLinkedListIterator getDoublyLinkedListIterator(DoublyLinkedList *doublyLinkedList,bool *success);
bool hasNextInDoublyLinkedList(DoublyLinkedListIterator *doublyLinkedListIterator);
void * getNextElementFromDoublyLinkedList(DoublyLinkedListIterator *doublyLinkedListIterator,bool *success);


#endif
