#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,sum=0;
clrscr();
printf("Enter the size of array :- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value of index value %d :- ",i);
scanf("%d",&a[i]);
}
clrscr();
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("addition of matrix is %d",sum);
getch();
}
