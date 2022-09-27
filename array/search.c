#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,found,search;
clrscr();
printf("Enter the size of array :- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d elements",i+1);
scanf("%d",&a[i]);
}
printf("Enter the element you want to search");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
found=1;
break;
}
}
if(found==1)
{
printf("Element is founded at %d location",i+1);
}
else
{
printf("element not found");
}
getch();
}
