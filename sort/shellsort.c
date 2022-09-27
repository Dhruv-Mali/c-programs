//shell sorting

#include <stdio.h>
#include <conio.h>

void shell_sort(int array[], int size)
{
	int temp, gap, i, exchange_occurred;

	gap = size / 2;

	do {
		do {
			exchange_occurred = 0;

			for (i = 0; i < size - gap; i++)
				if (array[i] > array[i + gap])
				{
					temp = array[i];
					array[i] = array[i + gap];
					array[i + gap] = temp;
					exchange_occurred = 1;
				}
		} while (exchange_occurred);
	} while (gap = gap / 2);//it execute until gap != NULL
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
	shell_sort(list,number);

	printf("\n Sorted list is as follows \n");

	for (i = 0; i < number; i++)
		printf("%d ", list[i]);
	getch();
}
