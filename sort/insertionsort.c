//Insertion sorting


#include <stdio.h>
#include <conio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
          while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
	insertionSort(list, number);
	printf("\n Sorted list is as follows \n");

	for (i = 0; i < number; i++)
		printf("%d ", list[i]);
	getch();
}
