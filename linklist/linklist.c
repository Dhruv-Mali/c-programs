//Linkedlist all operations
/*Write a program perform the following operations on a singly linked list.
 a) Create Linked list
 b) Insert element at first
position

c) Insert element at last position
d) Insert element in Linked list in sorted order
e) Delete element from Linked list
f) Copy Linked list
g) Find the sum of elements of linked list
h) Count number of nodes of linked list
i) Search given element
in linked list */


#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
struct linklist
{
  int no;
  struct linklist *next;
};
typedef struct linklist node;
node *create(node*,int);
node *front_insert(node*,int);
node *middle_insert(node*,int,int);
node *end_insert(node*,int);
node *front_delete(node*);
node *middle_delete(node*,int);
node *end_delete(node*);
node *sort(node*);
void search(node*,int);
void count(node*);
void findsum(node*);
void copy(node*);
void reverse(node*);
void display(node*);
int flag=1;
void main()
{
  int n,i,ch,x,ich,dch;
  node *head,*t;
  head=NULL;
  clrscr();
  menu:
       clrscr();
       printf("\nMenu:\n");
       printf("\n***********************\n");
       printf("1. Create\n");
       printf("2. Insert\n");
       printf("3. Delete\n");
       printf("4. Sort\n");
       printf("5. Search\n");
       printf("6. Count\n");
       printf("7. Copy\n");
       printf("8. Reverse\n");
       printf("9. Display\n");
       printf("11. Findsum\n");
       printf("10. Exit\n");
       printf("\n***********************\n");
       printf("\nEnter your choice:\n");
       scanf("%d",&ch);
	 switch(ch)
	 {
	  case 1:
		  printf("Enter no. of elements you want to enter:");
		  scanf("%d",&n);
		  for(i=0;i<n;i++)
		  {
		    printf("\nEnter elements:\n");
		    scanf("%d",&x);
		    head=create(head,x);
		  }
		  break;
	  case 2:
		  goto insertmenu;
	  case 3:
		  goto deletemenu;
	  case 4:
		  head=sort(head);
		  printf("Sorted successfully");
		  break;
	  case 5:
		  printf("Enter no. you want to search:");
		  scanf("%d",&x);
		  search(head,x);
		  break;
	  case 6:
		  count(head);
		  break;
	  case 7:
		  copy(head);
		  break;
	  case 8:
		  reverse(head);
		  break;
	  case 9:
		  display(head);
		  break;
	  case 10:
		  exit(0);
	  case 11:
		findsum(head);
		break;
       }
  getch();
  goto menu;

  insertmenu:
  clrscr();
	printf("\nMenu:\n");
	printf("\n1. Front insert");
	printf("\n2. Middle insert");
	printf("\n3. End insert");
	printf("\n4. Back to main menu");
	printf("\nEnter your choice");
	scanf("%d",&ich);
	switch(ich)
	{
	   case 1:
		  printf("\nEnter no. you want to insert:\n");
		  scanf("%d",&n);
		  head=front_insert(head,n);
		  break;
	   case 2:
		  printf("\nafter which number:\n");
		  scanf("%d",&n);
		  printf("\nEnter no.\n");
		  scanf("%d",&x);
		  head=middle_insert(head,n,x);
		  break;
	   case 3:
		  printf("\nEnter no.:\n");
		  scanf("%d",&n);
		  head=end_insert(head,n);
		  break;
	   case 4:
		  goto menu;
	   default:
		  printf("\n\nInvalid choice");
	}
	printf("\nSuccessfully inserted");
	printf("\nPress any key to continue");
	getch();
	goto insertmenu;

   deletemenu:
   flag=1;
   clrscr();
	printf("\nMenu:\n");
	printf("\n1. Front delete");
	printf("\n2. Middle delete");
	printf("\n3. End delete");
	printf("\n4. Back to main menu");
	printf("\nEnter your choice");
	scanf("%d",&dch);
	switch(dch)
	{
	   case 1:
		  head=front_delete(head);
		  break;
	   case 2:
		  printf("\nEnter no.\n");
		  scanf("%d",&x);

		  head=middle_delete(head,x);
		  break;
	   case 3:
		  head=end_delete(head);
		  break;
	   case 4:
		  goto menu;
	   default:
		  printf("\n\nInvalid choice");
	}
	printf("\nSuccessfully deleted");
	printf("\nPress any key to continue");
	getch();
	goto deletemenu;

}
node *create(node *head,int n)
{
   node *temp,*new1;
   temp=head;
   new1=(node*)malloc(sizeof(node));
   if(head==NULL)
   {
      new1->next=NULL;
      new1->no=n;
      head=new1;
   }
   else
   {
     while(temp->next!=NULL)
       temp=temp->next;
     new1->no=n;
     new1->next=NULL;
     temp->next=new1;
   }
   return(head);
}

node *front_insert(node *head,int n)
{
   node *new1;
   new1=(node*)malloc(sizeof(node));
   if(head==NULL)
   {
     new1->next=NULL;
     new1->no=n;
     head=new1;
   }
   else
   {
      new1->no=n;
      new1->next=head;
      head=new1;
   }
    return(head);
}

node *middle_insert(node *head,int n,int x)
{
  node *temp,*new1;
	  temp=head;
  new1=(node*)malloc(sizeof(node));
    if(head==NULL)
   {
     printf("\n Can't insert middle in the list");
   }
   else
   {

     while(temp->no!=n)
	temp=temp->next;
     new1->no=x;
     new1->next=temp->next;
     temp->next=new1;

   }
   return(head);
}

node *end_insert(node *head,int n)
{
   node *temp,*new1;
   temp=head;
   new1=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
     new1->next=NULL;
     new1->no=n;
     head=new1;
   }
   else
   {
      while(temp->next!=NULL)
	 temp=temp->next;
      new1->next=NULL;
      new1->no=n;
      temp->next=new1;
   }
   return(head);
}

node *front_delete(node *head)
{
   node *temp;
   if(head==NULL)
   {
     printf("Can't delete.No value present in the list");
   }
   else
   {
      temp=head;
      head=temp->next;
      free(temp);
   }
    return(head);
}

node *middle_delete(node *head,int x)
{
   node *temp;
   temp=head;
   if(head==NULL)
  {
    printf("Can't delete.No value present in the list");
  }
  else
  {
    while((temp->no!=x)&&(temp!=NULL))
    {
       if(temp->next->no==x)
       {
	  flag=1;
	  break;
       }
       else
       {
	 flag=0;
       }
      temp=temp->next;
    }
     if(flag==1)
	temp->next=temp->next->next;
     else
	printf("\nNode does not exist");
  }
  return(head);
}

node *end_delete(node *head)
{
  node *temp;
  temp=head;
  if(head==NULL)
  {
    printf("Can't delete.No value present in the list");
  }
  else
  {
    while(temp->next->next!=NULL)
       temp=temp->next;
    temp->next=NULL;
  }
  return(head);
}

void display(node *head)
{
   node *temp;
   temp=head;
   while(temp!=NULL)
   {
     printf("%d->",temp->no);
     temp=temp->next;
   }
   printf("NULL");
}

node *sort(node *head)
{
  node *temp,*temp1;
  int no1;
  temp=head;
  while(temp!=NULL)
  {
     temp1=temp->next;
     while(temp1!=NULL)
     {
       if(temp->no>temp1->no)
       {
	 no1=temp->no;
	 temp->no=temp1->no;
	 temp1->no=no1;
       }
       temp1=temp1->next;
     }
     temp=temp->next;
  }
  return(head);
}

void search(node *head,int x)
{
  node *temp;
  int c=1,flag=0;
  temp=head;
  while(temp!=NULL)
  {
    if(temp->no==x)
    {
      flag=1;
      break;
    }
    else
    {
    temp=temp->next;
    c++;
    }
  }
  if(flag==1)
  {
    printf("Given element is stored at %d position in the list",c);
  }
  else
    printf("This no. is not found in the linked list");
}

void count(node *head)
{
  node *temp;
  int c=0;
  temp=head;
  while(temp!=NULL)
  {
     temp=temp->next;
     c++;
  }
   printf("Total elements in the list are %d",c);
}

void copy(node *head)
{
  node *temp,*new1=NULL,*head1=NULL,*temp1;
  temp=head;
  while(temp!=NULL)
  {
    new1=(node*)malloc(sizeof(node));
    new1->no=temp->no;
    new1->next=NULL;
    temp=temp->next;
    if(head1==NULL)
       head1=new1;
    else
    {
      temp1=head1;
      while(temp1->next!=NULL)
	 temp1=temp1->next;
      temp1->next=new1;
    }
  }
  printf("Original link list is:");
  display(head);
  printf("\nNew copied linked listis:");
  display(head1);
}

void reverse(node *head)
{
   node *temp,*new1,*temp1;
   temp=head;
   while(temp!=NULL)
   {
     if(temp==head)
     {
       new1=(node*)malloc(sizeof(node));
       new1->no=temp->no;
       new1->next=NULL;
       temp1=new1;
     }
     else
     {
       new1=(node *)malloc(sizeof(node));
       new1->no=temp->no;
       new1->next=temp1;
       temp1=new1;
     }
     temp=temp->next;
   }
   printf("Original link list is:");
   display(head);
   printf("\n\nReverse link list is:");
   display(temp1);
}

 void findsum(node *head)
{
  node *temp;
  int sum=0;
  temp=head;
  while(temp!=NULL)
  {
    sum=sum+temp->no;
     temp=temp->next;

  }
   printf("The sum of elements in a list %d",sum);
}
