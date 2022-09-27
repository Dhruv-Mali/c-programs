#include<stdio.h>
#include<conio.h>
void main()
{
		 int arr[10],i,j,n,temp;
		 clrscr();
		 printf("Enter size of array");
		 scanf("%d",&n);
		 printf("enter element..");
		 for(i=0;i<n;i++)
		 {
			   scanf("%d",&arr[i]);
		 }
		 //10 20 30 40 50// input
		 //0  1  2  3  4
		 //i           j // swap 10 & 50
		 //50 20 30 40 10
		 //50 40 30 20 10
		 // i      j   //swap 20 & 40
		 j=n-1; //5-1=4 , 3 , 2
		 i=0;    //i=0 , 1 , 2
		 while(i<j)     //while(2<2) false terminated
		 {
		   temp=arr[i];
		   arr[i]=arr[j];
		   arr[j]=temp;
		   i++;
		   j--;
		   }
		   printf("\n element are like this...");

		   for(i=0;i<n;i++)
		   {
		   printf("%d\n",arr[i]);
		   }
		   getch();
		   }
