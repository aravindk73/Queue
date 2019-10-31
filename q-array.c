#include<stdio.h>
#include<stdlib.h>

#define size 5

void enqueue(int a[]);
void display(int a[]);
void dequeue(int a[]);


int top=-1;
int rear=-1;

void main()
{
 int ch;
 int a[size];
 while(1)
 {
  printf("\n*** Queue Menu ***");
  printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
  printf("\n\nEnter your choice(1-4):");
  scanf("%d",&ch);
  switch(ch)
  {			
   case 1: enqueue(a);
   break;
   case 2: dequeue(a);
   break;
   case 3: display(a);
   break;
   case 4: exit(0);
   default: printf("\nWrong Choice!!");
   }
 }
}
	
void enqueue(int a[])
{
 int x;
 if(rear>size)
 {
  printf("Queue is full");
 } 
 else
 {
   printf("Enter the element :");
   scanf("%d",&x);
 if(top==-1)
  {
   a[++rear]=x;	  
   top=0;
  }
  else
  { 
   a[++rear]=x;
  }
 }
}


void display(int a[])
{
  for(int i=top;i<=rear;i++)
  {
   printf("%d\t",a[i]);
  } 
} 

void dequeue(int a[])
{
 if(top==rear)
 {
  top=-1;
  rear=-1;  
  printf("Queue is empty");
 }
 else
 {	
  top++;
 }
}


