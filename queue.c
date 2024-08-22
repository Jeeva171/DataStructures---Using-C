
#include<stdio.h>
int front=-1, rear=-1;
void enqueue()
void dequeue()
void display() 
void main()
{
   int i,n,c,a[100];
   printf("Enter size of queue=");
   scanf("%d",&n);
   while(n!=4)
   {
      printf("Enter 1 for insertion\n");
      printf("Enter 2 for deletion\n");
      printf("Enter 3 for display\n");
      printf("Enter 4 t0 stop\n");
      printf("choice=");
      scanf("%d",&c);
      if(c==1)
        void enqueue();
      else if(c==2)
         void dequeue();
      else if(c==3)
          void display();
       else if(c==4)
           break;
           
    }
    void enqueue
    {
       if(rear=n-1)
       {
         printf("Overflow");
        }
        else
        {
         rear++;
         printf("Enter the element=");
         scanf("%d",a[rear]);
        }
      }
      void dequeue
      {  
         int item;
         if(front==-1 && rear==-1)
         {
           printf("Underflow");
         }
         else if(front==rear)
         {
          item=a[front];
          front=-1;
          rear=-1;
          printf("The deleted item is %d",item);
          }
          else
          {
            item=a[front];

           
         
	

