#include<stdio.h>
#include<stdlib.h>

void enque();
void deque();
void display();

typedef struct node
{
 int data;
 struct node* link;
}node;

node* head=NULL;
node* rear=NULL;

void main()
{
 int ch;
 while(1)
 {
  printf("\n*** Queue Menu ***");
  printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
  printf("\n\nEnter your choice(1-4):");
  scanf("%d",&ch);
  switch(ch)
  {			
   case 1: enque();
   break;
   case 2: deque();
   break;
   case 3: display();
   break;
   case 4: exit(0);
   default: printf("\nWrong Choice!!");
   }
 }
}

void enque ()  
{  
 int data;  
 node *temp =(node*)malloc(sizeof(node));   
 if(temp == NULL)  
 {  
  printf("Not able to insert the element");   
 }  
 else   
 {  
  printf("\nEnter the data :");  
  scanf("%d",&data);  
  if(head==NULL)  
  {         
   temp->data=data;  
   temp->link=NULL;  
   head=temp;
   rear=temp;  
  }   
  else   
  {  
   temp->data=data;  
   rear->link=temp;  
   rear=temp;
   rear->link=NULL;   
  }  
  printf("\nItem Inserted\n");                
 }  
}  

void deque()  
{  
 int item;  
 struct node *temp;  
 if (head==NULL)  
 {  
  printf("Underflow");  
 }  
 else  
 {  
  item=head->data;  
  temp=head;  
  head=head->link;  
  free(temp);  
  printf("\nItem Deleted\n");               
 }
}  

void display()  
{  
 int i;  
 node *temp;  
 temp=head;  
 if(temp == NULL)  
 {  
  printf("Queue is empty\n");  
 }  
 else  
 {  
  printf("\nPrinting Queue elements :\n");  
  while(temp!=NULL)  
  {  
   printf("%d\n",temp->data);  
   temp=temp->link;  
  }  
 }  
}  
