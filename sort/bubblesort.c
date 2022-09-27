//Bubble Sorting
// The best-case time complexity of Bubble Sort is: O(n)
//The worst-case time complexity of Bubble Sort is: O(n²)
#include <stdio.h>
#include <conio.h>

void bubble_sort(int array[], int size)
{
	int temp, i, j;

	for (i = 0; i < size-1; i++)
	{
		for (j = 0; j < size-i-1; j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

}

void main(void)
{
	int list[30], i,number;
	clrscr();
	printf("Input the number of elements in the list:");
	scanf("%d",&number);

	for(i = 0 ; i < number; i++)
	{

		printf("enter [%d] number:",i+1);
		scanf("%d",&list[i]);
	}
	bubble_sort(list, number);
	printf("\n Sorted list is as follows\n");

	for (i = 0; i < number; i++)
		printf("%d ", list[i]);
	getch();
}