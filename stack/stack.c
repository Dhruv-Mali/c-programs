#include<stdio.h>
int stack[100],choice,n,top,x,i,item,key;
void push();
void pop();
void peep();
void update();
void display();
int main()
{
    clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);

    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t.4 .PEEP \n\t Update \n\t 5.EXIT");
    do
    {
	printf("\n Enter the Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    {
		push();
		break;
	    }
	    case 2:
	    {
		pop();
		break;
	    }
	    case 3:
	    {
		display();
		break;
	    }
	case 4:
	{
		peep();
		break;
	}
	case 5:
	{
		update();
		break;
	}
	    case 6:
	    {
		printf("\n\t EXIT ");
		break;
	    }
	    default:
	    {
		printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
	    }

	}
    }
    while(choice!=5);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
	printf("\n\tSTACK is over flow");

    }
    else
    {
	printf(" Enter a value to be pushed:");
	scanf("%d",&x);
	top++;
	stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
	printf("\n\t Stack is under flow");
    }
    else
    {
	printf("\n\t The popped elements is %d",stack[top]);
	top--;
    }
}
void peep()
{

	if(top==-1)
	{
		printf("\nStack is empty:");
	}
	else
	{
		printf("Enter index of element to search ");
		scanf("%d",&key);
		item=stack[top-key+1];
		printf("The Location of%d  Element is at %d ",key,item);
	}
}
void update()
{
	int v2;
  	printf("\nEnter Position for change : ");
	 scanf("%d",&key);
	  printf("\nEneter the Number for change : ");
	  scanf("%d",&v2);
	  if(top-key+1<=-1)
	  {
		     printf("\nSTACK is Underflow !!!");
	  }
	  else
	  {
		    stack[top-key+1]=v2;
		    printf("\nCHANGE successfull !!!");
  	}
}

void display()
{
    if(top>=0)
    {
	printf("\n The elements in STACK \n");
	for(i=top; i>=0; i--)
	    printf("\n%d",stack[i]);
	printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}
