#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	clrscr();
	printf("Enter string 1 :- ");
	gets(str1);
	printf("Copied string is %s",strcpy(str2,str1));
	getch();
}