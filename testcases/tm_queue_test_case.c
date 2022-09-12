#include<tm_queue.h>
#include<stdio.h>
int main()
{
bool succ;
int x1,x2,x3,x4,*x;
x1=100;x2=200;x3=300;x4=400;
Queue *q1;
q1=createQueue(&succ);
if(succ) printf("Queue created\n");
else printf("Unable to createing queue\n");
addToQueue(q1,(void *)&x1,&succ);
if(succ==false) printf("%d not added in queue\n",x1);
else printf("%d added in queue\n",x1);
addToQueue(q1,(void *)&x2,&succ);
if(succ==false) printf("%d not added in queue\n",x2);
else printf("%d added in queue\n",x2);
addToQueue(q1,(void *)&x3,&succ);
if(succ==false) printf("%d not added in queue\n",x3);
else printf("%d added in queue\n",x3);
addToQueue(q1,(void *)&x4,&succ);
if(succ==false) printf("%d not added in queue\n",x4);
else printf("%d added in queue\n",x4);
printf("size of queue %d\n",getSizeOfQueue(q1));
if(isQueueEmpty(q1)) printf("Queue is empty\n");
else printf("Queue is not empty\n");
x=(int *)elementAtFrontOfQueue(q1,&succ);
printf("Element at front of queue is %d\n",*x);

printf("Now removing all element from queue\n");
while(!isQueueEmpty(q1))
{
x=(int *)removeFromQueue(q1,&succ);
printf("%d removed from queue\n",*x);
}

addToQueue(q1,(void *)&x4,&succ);
if(succ==false) printf("%d not added in queue\n",x4);
else printf("%d added in queue\n",x4);
x=(int *)elementAtFrontOfQueue(q1,&succ);
printf("Element at front of queue is %d\n",*x);
clearQueue(q1);
destroyQueue(q1);
x=(int *)elementAtFrontOfQueue(q1,&succ);
printf("Element at front of queue is %d\n",*x);

return 0;
}
