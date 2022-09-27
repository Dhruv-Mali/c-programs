//Linear Searching
//In linear search, best-case complexity is O(1) where the element is found at the first index. 
//Worst-case complexity is O(n) where the element is found at the last index or element is not present in the array.
#include<stdio.h>
#include<conio.h>
int linear_search(int [], int, int);

void main()
{

   int array[20], search, c, n, position;
    clrscr();
   printf("Input number of elements in array\n");
   scanf("%d", &n);

   printf("Input %d numbers\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Input a number to search\n");
   scanf("%d", &search);

   position = linear_search(array, n, search);

   if (position == -1)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);

   getch();

}

int linear_search(int a[], int n, int find)
{
   int c;

   for (c = 0 ;c < n ; c++ )
   {
      if (a[c] == find)
	 return c;
   }

   return -1;
}


