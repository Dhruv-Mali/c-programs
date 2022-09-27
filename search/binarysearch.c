//Binary Searching
//The time complexity of the binary search algorithm is O(log n).
#include <stdio.h>
#include <conio.h>

int binary_search(int arr[],int val,int size)
{
  int found=0;
  int high=size-1,low=0,mid;
  mid=(high+low)/2;
  while((!found) && (high>=low))
  {
    if(val==arr[mid])
    {
      found=1;
      break;
    }
    else if(val<arr[mid])
      high=mid-1;
    else
      low=mid+1;

    mid=(high+low)/2;
  }
  return((found)?mid:-1);
}

void main()
 {
	int list[100],i,key,number,r;
	clrscr();
	printf("Input the number of elements in the list:");
	scanf("%d",&number);

	for(i = 0 ; i < number; i++)
	{

		printf("enter [%d] number:",i+1);
		scanf("%d",&list[i]);
	}
	printf("\n Enter search key:");
	scanf(" %d",&key);
	r=binary_search(list,key,number);

    if(r!=-1)
	printf("\nsuccessful search....\n%d is found at position %d ",key,r+1);
   else
	printf("\nunsuccessful search...\n %d is not found in the list",key);
  getch();
}
