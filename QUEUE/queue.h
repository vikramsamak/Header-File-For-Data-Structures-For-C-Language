#include<stdio.h>
#define SIZE 100
int front = -1, rear = -1,queue[SIZE],s;
void queuedatastruct(int size)
{
    s=size;
    if(s<=SIZE)
    {
        int queue[s];
    }   
    
}
void enqueue(int data)
{   
    if(rear == s-1)
    printf("\nQueue is Full!!! Insertion is not possible!!!");
    else
    {
        if(front == -1)
        front = 0;
        rear++;
        queue[rear] = data;
        printf("\n%d Inserted Into Queue.",data);

    }
} 
void peek()
{
if(rear == -1)
    printf("\nQueue is Empty!!!");
    else
    {
        printf("\nFirst Element In Queue Is:%d",queue[front]);
    }

}   
void dequeue()
{   int n;
    if(front == rear)
    printf("\nQueue is Empty!!! Deletion is not possible!!!");
    else
    {
    printf("\nDeleted : %d", queue[front]);
    for(n=0;n<=rear-1;n++)
    {
       queue[n]=queue[n+1];
    } 
   }
   rear--;

}
void displayqueue()
{
    if(rear == -1)
    printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
        printf("%d\t",queue[i]);
        printf("\n");
    }
}
void searchfromqueue(int d)
{
    if(rear == -1)
    printf("\nQueue is Empty!!!");
    else
    {
        int i,flag=0;
        i=front;
        while(i<=rear)
        {
            if(d==queue[i])
            {
                printf("%d Found At Index:%d",d,i);
                flag=0;
                break;
            }
            else
            {
                flag=1;
                i++;
            }
        }
        if(flag==1)
        {
            printf("%d Not Found In Queue",d);
        }
          
    }printf("\n");
}