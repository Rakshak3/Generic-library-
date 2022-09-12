#include<tm_avl_tree.h>
#include<stdio.h>
#include<stdlib.h>
int myComparator(void *left,void *right)
{
int *leftInt,*rightInt;
leftInt=(int *)left;
rightInt=(int *)right;
return (*leftInt)-(*rightInt);
}
int main()
{
AVLTreeInOrderIterator inOrderIterator;
AVLTreePreOrderIterator preOrderIterator;
AVLTreePostOrderIterator postOrderIterator;
int ch,*x;
int num;
AVLTree *tree;
bool success;
tree=createAVLTree(&success,myComparator);
if(success==false)
{
printf("Unble to create tree,low on memory\n");
return 0;
}

while(1)
{
printf("1. Insert\n");
printf("2. Inorder traverse\n");
printf("3. search\n");
printf("4. Remove\n");
printf("5. Preorder itaverse\n");
printf("6. Postorder iterator\n");
printf("7. Exit\n");
printf("Entert your choise : ");
scanf("%d",&ch);
while((getchar())!='\n');
if(ch==1)
{
printf("Enter number to insert in tree : ");
scanf("%d",&num);
x=(int *)malloc(sizeof(int));
*x=num;
insertIntoAVLTree(tree,(void *)x,&success);
if(success) printf("Address of item that contains %d inserted in tree\n",*x);
else printf("Unable to insert in tree\n");
}
if(ch==2)
{
inOrderIterator=getAVLTreeInOrderIterator(tree,&success);
if(success)
{
while(hasNextInOrderElementInAVLTree(&inOrderIterator))
{
x=getNextInOrderElementFromAVLTree(&inOrderIterator,&success);
printf("%d\n",*x);
}
}
}
if(ch==3)
{
printf("Enter number to search in tree : ");
scanf("%d",&num);
while((getchar())!='\n');
x=getFromAVLTree(tree,(void *)&num,&success);
if(success) printf("%d found\n",*x);
else printf("%d not found\n",num);
}
if(ch==4)
{
printf("Enter number to remove : ");
scanf("%d",&num);
while((getchar())!='\n');
x=removeFromAVLTree(tree,(void *)&num,&success);
if(success) printf("%d found and remove\n",*x);
else printf("%d not found\n",num);
}
if(ch==5)
{
preOrderIterator=getAVLTreePreOrderIterator(tree,&success);
if(success)
{
while(hasNextPreOrderElementInAVLTree(&preOrderIterator))
{
x=getNextPreOrderElementFromAVLTree(&preOrderIterator,&success);
printf("%d\n",*x);
}
}
}
if(ch==6)
{
postOrderIterator=getAVLTreePostOrderIterator(tree,&success);
if(success)
{
while(hasNextPostOrderElementInAVLTree(&postOrderIterator))
{
x=getNextPostOrderElementFromAVLTree(&postOrderIterator,&success);
printf("%d\n",*x);
}
}


}


if(ch==7) break;
}

/*
while(1)
{
printf("Enter number to be insert in tree : ");
scanf("%d",&num);
while((getchar())!='\n');
x=(int *)malloc(sizeof(int));
*x=num;
insertIntoAVLTree(tree,(void *)x,&success);
if(success) printf("add of iteam that contains %d inserted in tree\n",*x);
else printf("Unable to insert in tree\n");
printf("Insert more (y/n) : ");
more=getchar();
while((getchar())!='\n');
if(more!='y' && more!='Y') break;
}
printf("In Order Iteration Starts\n");
iterator=getAVLTreeInOrderIterator(tree,&success);
if(success)
{
while(hasNextInAVLTree(&iterator))
{
x=(int *)getNextElementFromAVLTree(&iterator,&success);
printf("%d\n",*x);
}
}
while(1)
{
printf("Enter number to search in Tree: ");
scanf("%d",&num);
while((getchar())!='\n');
x=getFromAVLTree(tree,&num,&success);

if(success==false) printf("%d not found\n",num);
else printf("%d found\n",*x);
printf("Search more (y/n) : ");
more=getchar();
while((getchar())!='\n');
if(more!='y' && more!='Y') break;
}
*/
return 0;
}

