#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int length;
	char str[10];
	clrscr();
	printf("Enter string :- ");
	gets(str);

	printf("Length of string is %d",strlen(str));
	getch();
}