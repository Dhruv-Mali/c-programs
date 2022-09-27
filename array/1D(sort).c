#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,arr[10],j,a;
clrscr();
printf("Enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d elements :- ",i+1);
scanf("%d",&arr[i]);
}
// Sorting logic
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		 {
			a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
		}
		}
}
printf("Sorted array is as under");
for(i=0;i<n;i++)
	{
	printf("\n\n Element at %d position is now :- %d",i,arr[i]);
	}
getch();
}
