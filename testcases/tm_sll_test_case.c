#include<tm_sll.h>
#include<stdio.h>
int main()
{
int y,i1,i2,i3,i4,i5;
int *x;
SinglyLinkedList *list1;
bool suc;
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
list1=createSinglyLinkedList(&suc);
if(suc==false)
{
printf("Unable to creat List\n");
return 0;
}
printf("List created\n");
addToSinglyLinkedList(list1,(void *)&i1,&suc);
if(suc) printf("%d is added in ilst1\n",i1);
else printf("Unble to add %d in list1\n",i1);
printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));
addToSinglyLinkedList(list1,(void *)&i2,&suc);
if(suc) printf("%d is added in ilst1\n",i2);
else printf("Unble to add %d in list1\n",i2);
printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));
addToSinglyLinkedList(list1,(void *)&i3,&suc);
if(suc) printf("%d is added in ilst1\n",i3);
else printf("Unble to add %d in list1\n",i3);
printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));
printf("Contents of list1\n");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}
insertIntoSinglyLinkedList(list1,0,(void *)&i4,&suc);
if(suc) printf("%d inserted in list at index 0\n",i4);
insertIntoSinglyLinkedList(list1,2,(void *)&i5,&suc);
if(suc) printf("%d inserted in list at index 2\n",i5);

printf("Contens of list after insertion\n");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}
x=(int *)removeFromSinglyLinkedList(list1,3,&suc);
printf("%d remove from list1\n",*x);
printf("Contens After removing\n");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}
printf("Clearing list\n");
clearSinglyLinkedList(list1);
printf("destroying list\n");
destroySinglyLinkedList(list1);
return 0;
}
