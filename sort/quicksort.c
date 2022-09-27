#include<stdio.h>
#include<conio.h>

void sort(int [],int);
void  qsort(int* a1,int p1,int r1);
int  partition(int* a,int p,int r);

void main()
{
int arr[50],n,i;
clrscr();
	printf("\nenter the no of elements of array n= : ");
	scanf("%d",&n);
	printf("\nenter the array elements : ");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);

	qsort(arr,0,n-1);

	printf("\nSorted array is \n");
	for(i=0;i<n;i++)
	   printf("  %d",arr[i]);

    getch();
}

void qsort(int a1[],int p1,int r1)
{
 int q,q1,i;
 char ch;
 if (p1<r1)
  {
   q=partition(a1,p1,r1);
     qsort(a1,p1,q-1);
     qsort(a1,q+1,r1);
  }
}

int partition(int a[],int p,int r)
{
  int x,i,j,t;
  x=a[r];
  i=p-1;
  for(j=p;j<r;j++)
   {
     if(a[j]<=x)
       {
	 i++;
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;
       }
   }
   t=a[i+1];
   a[i+1]=a[r];
   a[r]=t;
   return(i+1);
}
