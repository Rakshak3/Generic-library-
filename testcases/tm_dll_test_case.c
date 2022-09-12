#include<tm_dll.h>
#include<stdio.h>
int main()
{
int y,i1,i2,i3,i4,i5;
int *x;
DoublyLinkedList *list1;
bool suc;
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
list1=createDoublyLinkedList(&suc);
if(suc==false)
{
printf("Unable to creat List\n");
return 0;
}
printf("List created\n");
addToDoublyLinkedList(list1,(void *)&i1,&suc);
if(suc) printf("%d is added in ilst1\n",i1);
else printf("Unble to add %d in list1\n",i1);
printf("Size of list1 is %d\n",getSizeOfDoublyLinkedList(list1));
addToDoublyLinkedList(list1,(void *)&i2,&suc);
if(suc) printf("%d is added in ilst1\n",i2);
else printf("Unble to add %d in list1\n",i2);
printf("Size of list1 is %d\n",getSizeOfDoublyLinkedList(list1));
addToDoublyLinkedList(list1,(void *)&i3,&suc);
if(suc) printf("%d is added in ilst1\n",i3);
else printf("Unble to add %d in list1\n",i3);
printf("Size of list1 is %d\n",getSizeOfDoublyLinkedList(list1));
insertIntoDoublyLinkedList(list1,0,(void *)&i4,&suc);
if(suc) printf("%d inserted in list at index 0\n",i4);
insertIntoDoublyLinkedList(list1,2,(void *)&i5,&suc);
if(suc) printf("%d inserted in list at index 2\n",i5);
printf("Size of list1 is %d\n",getSizeOfDoublyLinkedList(list1));


printf("Contens of list after insertion\n");
for(y=0;y<getSizeOfDoublyLinkedList(list1);y++)
{
x=(int *)getFromDoublyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}


/*printf("Contents of list1\n");
for(y=0;y<getSizeOfDoublyLinkedList(list1);y++)
{
x=(int *)getFromDoublyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}

insertIntoDoublyLinkedList(list1,0,(void *)&i4,&suc);
if(suc) printf("%d inserted in list at index 0\n",i4);
insertIntoDoublyLinkedList(list1,2,(void *)&i5,&suc);
if(suc) printf("%d inserted in list at index 2\n",i5);

printf("Contens of list after insertion\n");
for(y=0;y<getSizeOfDoublyLinkedList(list1);y++)
{
x=(int *)getFromDoublyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}
x=(int *)removeFromDoublyLinkedList(list1,3,&suc);
printf("%d remove from list1\n",*x);
printf("Contens After removing\n");
for(y=0;y<getSizeOfDoublyLinkedList(list1);y++)
{
x=(int *)getFromDoublyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}
printf("Clearing list\n");
clearDoublyLinkedList(list1);
printf("destroying list\n");
destroyDoublyLinkedList(list1);
*/
return 0;
}
