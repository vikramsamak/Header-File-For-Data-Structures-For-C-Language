#include<stdio.h>
#include<stdlib.h>
#include"queue1.1.h"
void main ()
{
 int choice;
 while (1)
 {
    printf("\n");
    printf("\nEnter Your Choice.");
    printf("\n1.Create Queue.");
    printf("\n2.Enqueue.");
    printf("\n3.Peek.");
    printf("\n4.Dequeue.");
    printf("\n5.Searching From Queue.");
    printf("\n6.Display Queue.");
    printf("\n7.Exit");
    
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:queuedatastruct();
            break;
        case 2:enqueue();
            break;
        case 3:peek();
            break;    
        case 4:dequeue();
            break;
        case 5:searchfromqueue();
            break;
        case 6:displayqueue();
            break;
        case 7:exit(0);    
        default:printf("\nInvalid Entry");
    
    }
 }
}