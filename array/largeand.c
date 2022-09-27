#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,large,small;
clrscr();
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)      		       // 5>5 loop terminated
{
printf("Enter %d element :- ",i+1);
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)         // to find the largest element in array
large=a[i];
if(a[i]<small)         // to find the smallest element in array
small=a[i];
}
printf("\nThe smallest element is %d \n",small);
printf("\nThe largest element is %d \n ",large);
printf("\n \n \tThank you!!");
getch();
}