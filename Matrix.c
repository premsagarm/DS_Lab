
#include<stdio.h>
void main()
{
int choice, m1, n1, m2, n2;
int a[20][20], b[20][20], c[20][20];
do
{
printf("\nEnter:\n 1 for addition\n 2 for transpose\n 3 for multiplication\n 4 to exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter the value of the row and columnn for matrix 'a'");
scanf("%d%d",&m1,&n1);
printf("\nEnter the value of the row and columnn for matrix 'b'");
scanf("%d%d",&m2,&n2);
if(m1==m2&&n1==n2)
{
printf("\nenter the elements of the matix 'a'");
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
scanf("%d",&a[i][j]);
}
printf("\nenter the elements of the matix 'b'");
for(int i=0;i<m2;i++)
{
for(int j=0;j<n2;j++)
scanf("%d",&b[i][j]);
}
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("\nThe resultant matrix:");
for(int i=0;i<m1;i++)
{
printf("\n");
for(int j=0;j<n1;j++)
printf("%d\t",c[i][j]);
}
}
else
printf("\nError. Check the entered dimensions and retry");
break; 

case 2:
printf("\nEnter the value of the row and columnn for matrix");
scanf("%d%d",&m1,&n1);
printf("\nenter the elements of the matix");
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
scanf("%d",&a[i][j]);
}


for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
b[j][i]=a[i][j];
}


printf("\nThe resultant matrix:");
for(int i=0;i<n1;i++)
{
printf("\n");
for(int j=0;j<m1;j++)
printf("%d\t",b[i][j]);
}
break;

case 3:
printf("\nEnter the value of the row and columnn for matrix 'a'");
scanf("%d%d",&m1,&n1);
printf("\nEnter the value of the row and columnn for matrix 'b'");
scanf("%d%d",&m2,&n2);
if(n1==m2)
{
printf("\nenter the elements of the matix 'a'");
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
scanf("%d",&a[i][j]);
}
printf("\nenter the elements of the matix 'b'");
for(int i=0;i<m2;i++)
{
for(int j=0;j<n2;j++)
scanf("%d",&b[i][j]);
}
for(int i=0;i<m1;i++)
{
for(int j=0;j<n2;j++)
{
c[i][j]=0;
for(int k=0;k<m2;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
printf("\nThe resultant matrix:");
for(int i=0;i<m1;i++)
{
printf("\n");
for(int j=0;j<n2;j++)
printf("%d\t",c[i][j]);
}
}
else
{
printf("\nError. Check the entered dimensions and retry");
break;
}

}
}while(choice!=4);
}
