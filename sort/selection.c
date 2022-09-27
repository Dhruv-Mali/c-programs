//Selection Sorting

#include <stdio.h>
#include <conio.h>

void selection_sort(int array[], int size)
{
	int temp, current, j;

	for (current = 0; current < size; current++)
		for (j = current + 1; j < size; j++)
			if (array[current] > array[j])
			{
				temp = array[current];
				array[current] = array[j];
				array[j] = temp;
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
	selection_sort(list, number);
	printf("\n Sorted list is as follows \n");

	for (i = 0; i < number; i++)
		printf("%d ", list[i]);
	getch();
}
