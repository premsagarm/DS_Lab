//Implementation of circular queue
#include<stdio.h>
int a[10];
void main()
{
int n, i, item, ch;
printf("\nEnter the number of elements");
scanf("%d",&n);
int front=-1, rear=-1;
do
{
printf("\nEnter your choice");
printf("\n1. add \n2. delete \n3. display \n4. exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the element");
scanf("%d",&item);
if((front==rear+1)||(front==0&&rear==n-1))
printf("\nThe queue is full");
else
{
if(front==-1)
front=0;
rear=(rear+1)%n;
a[rear]=item;
printf("\nInserted %d",item);
}
break;


case 2:
if(front==-1)
printf("\nCircular queue is Empty");
else
{
item=a[front];
if(front==rear)
front=rear=-1;
else
front=(front+1)%n;
printf("\nDeleted element %d",item);
}
break;


case 3:
if(front==-1)
printf("\nEmpty queue");
else
{
printf("\nThe elements in the array are:\n");
for(i=front;i!=rear;i=(i+1)%n)
printf("%d\t",a[i]);
printf("%d",a[rear]);
}
break;


case 4:
printf("\nExiting the program");
break;


default:
printf("\nInvalid choice");
break;
}
}while(ch!=4);
}

