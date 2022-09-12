#include<stdio.h>
#include<tm_stack.h>
int main()
{
bool su;
int x1,x2,x3,x4,x5,*x;
Stack *s1;
x1=100;
x2=200;x3=300;x4=400;x5=500;
s1=createStack(&su);
if(su==false) printf("Stack Not Created\n");
else printf("Stack Created\n");
pushOnStack(s1,(void *)&x1,&su);
if(su) printf("%d pushed on stack\n",x1);
else printf("Unable to push %d on stack\n",x1);
pushOnStack(s1,(void *)&x2,&su);
if(su) printf("%d pushed on stack\n",x2);
else printf("Unable to push %d on stack\n",x2);
pushOnStack(s1,(void *)&x3,&su);
if(su) printf("%d pushed on stack\n",x3);
else printf("Unable to push %d on stack\n",x3);
pushOnStack(s1,(void *)&x4,&su);
if(su) printf("%d pushed on stack\n",x4);
else printf("Unable to push %d on stack\n",x4);
pushOnStack(s1,(void *)&x5,&su);
if(su) printf("%d pushed on stack\n",x5);
else printf("Unable to push %d on stack\n",x5);
printf("Size of Stack %d\n",getSizeOfStack(s1));

x=(int *)elementAtTopOfStack(s1,&su);
printf("Element at top of stack is %d\n",*x);
printf("Noe poping all elements from stack\n");
while(!isStackEmpty(s1))
{
x=(int *)popFromStack(s1,&su);
printf("%d poped from stack\n",*x);
}
printf("Size of Stack %d\n",getSizeOfStack(s1));

x=(int *)elementAtTopOfStack(s1,&su);
printf("Element at top of stack is %d\n",*x);
clearStack(s1);
destroyStack(s1);
return 0;
}
