#include<stdio.h>
#include<stdlib.h>
#include"stack1.1.h"
void main ()
{
 int choice;
 while (1)
 {
    printf("\n");
    printf("\nEnter Your Choice.");
    printf("\n1.Create Stack.");
    printf("\n2.PUSH.");
    printf("\n3.PEEK.");
    printf("\n4.POP.");
    printf("\n5.Searching From Stack.");
    printf("\n6.Display Stack.");
    printf("\n7.Exit");
    
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:stackdatastruct();
            break;
        case 2:push();
            break;
        case 3:peek();
            break;
        case 4:pop();
            break;
        case 5:search();
            break;
        case 6:stackdisplay();
            break;
        case 7:exit(0);    
        default:printf("\nInvalid Entry");
    
    }
 }
}