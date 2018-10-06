
#include<stdio.h>
#define max 4

int top1, top2, arr[max], b1, b2;

void push();
void pop();
void display();


void main()
{
int ch;
top1=b1=-1,top2=b2=(max-1)/2;
do
{
printf("\n1:push\n2:pop\n3:display\n4:exit\nchoice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:printf("\nexiting from program");
break;
default:printf("\nwrong choice");
break;
}
}while(ch!=4);
}


void push()
{
int x, ch;
printf("\nenter a no");
scanf("%d",&x);
printf("\npress 1 to push in stack 1 or 2 to push in stack 2");
scanf("%d",&ch);
if
(ch==1)
{
if(top1==b2)
{
printf("\nstcak overflow");
return;
}
else
arr[++top1]=x;
}
if(ch==2)
{
if(top2==max-1)
{
printf("\nstack overflow");
return;
}
else
arr[++top2]=x;
}
}


void pop()
{
int y, ch;
printf("\npress 1 to pop from stack 1 or 2 to pop from stack 2");
scanf("%d",&ch);
if(ch==1)
{
if(top1==-1)
{
printf("\nstack underflow");
return;
}
y=arr[top1--]=0;
}
else if(ch==2)
{
if(top2==b2)
{
printf("\nstack underflow");
return;
}
y=arr[top2];
arr[top2--]=0;
}
printf("\nelement is successfully poped from the stack\n");
return;
}


void display()
{
int i;
if(top1==-1)
printf("\nstack 1 is empty");
else
{
printf("\nelements of stack 1 are:\n");
for(i=0;i<=top1;i++)
printf("%d\n",arr[i]);
}
if(top2==b2)
printf("\nstack 2 is empty");
else
{
printf("\nelements of stack 2 are:\n");
for(i=b2+1;i<=top2;i++)
printf("%d\n",arr[i]);
}
return;
}

