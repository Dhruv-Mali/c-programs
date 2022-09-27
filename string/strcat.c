#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
clrscr();
	printf("Enter string 1 :- ");
	gets(str1);
	printf("Enter string 2 :- ");
	gets(str2);
	printf("\n Concatination of string is %s",strcat(str1,str2));
	printf("\n Length of string is %d",strlen(strcat(str1,str2)));
	getch();
}