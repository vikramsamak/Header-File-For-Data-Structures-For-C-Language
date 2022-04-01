#include<stdio.h>
#include<stdlib.h>
#include"linkedlist1.1.h"
void main ()
{
 int choice;
 while (1)
 {
    printf("\n");
    printf("\nEnter Your Choice.");
    printf("\n1.Create Linked List.");
    printf("\n2.Inserting Operation");
    printf("\n3.Deleting Operation.");
    printf("\n4.Searching Operation.");
    printf("\n5.Display Linked List.");
    printf("\n6.Exit");
    
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:createnodelist();
            break;
        case 2:insertionselector();
            break;
        case 3:deletionselector();
            break;
        case 4:searchfromlinkedlist();
            break;
        case 5:displaylinkedlist();
            break;
        case 6:exit(0);    
        default:printf("\nInvalid Entry");
    
    }
 }
}
void insertionselector()
{
    printf("\nSelect From Below:");
    int inchoice;
    printf("\n1.Insertion At Begin");
    printf("\n2.Insertion At End");
    printf("\n3.Insertion At Middle");
    printf("\nEnter Choice.: ");
    scanf("%d",&inchoice);

    switch (inchoice)
    {
    case 1:nodeinsertatbegin();
        break;
    case 2:nodeinsertatend();
        break;
    case 3:nodeinsertatmiddle();
        break;    
    default:printf("Invalid Selection");
        break;
    }
}
void deletionselector()
{
    int delchoice;
    printf("\nSelect From Below:");
    printf("\n1.Deletion At Begin");
    printf("\n2.Deletion At End");
    printf("\n3.Deletion At Middle");
    printf("\nEnter Choice.: ");
    scanf("%d",&delchoice);

    switch (delchoice)
    {
    case 1:firstnodedeletion();
        break;
    case 2:lastnodedeletion();
        break;
    case 3:middlenodedeletion();
        break;    
    default:printf("Invalid Selection");
        break;
    }
}