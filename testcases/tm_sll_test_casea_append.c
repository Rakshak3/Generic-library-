#include<tm_sll.h>
#include<stdio.h>
int main()
{
int y,i1,i2,i3,i4,i5,i6;
int *x;
SinglyLinkedList *list1,*list2;
bool suc;
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
i6=600;
list1=NULL;
list2=NULL;
if(suc==false)
{
printf("Unable to creat List\n");
return 0;
}
addToSinglyLinkedList(list1,(void *)&i1,&suc);
addToSinglyLinkedList(list1,(void *)&i2,&suc);
addToSinglyLinkedList(list2,(void *)&i3,&suc);
addToSinglyLinkedList(list2,(void *)&i4,&suc);
addToSinglyLinkedList(list2,(void *)&i5,&suc);
addToSinglyLinkedList(list2,(void *)&i6,&suc);

appendToSinglyLinkedList(list1,list2,&suc);
if(suc) printf("Appended\n"); else printf("Unable to append\n");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&suc);
printf("%d\n",*x);
}


destroySinglyLinkedList(list1);
return 0;
}
