#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[20];
clrscr();
	printf("Enter string 1:- ");
	gets(str1);
	printf("Enter string 2:- ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
	printf("same");
	}
	else
	{
	printf("not same");
	}
	getch();

}