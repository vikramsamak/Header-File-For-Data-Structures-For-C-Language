#include<stdlib.h>
#include<stdio.h>
int n;
struct node
{
 int num; 
 struct node *nextptr; 
}*ptr,*stnode;
//LINKED_LIST_CREATING//
void createnodelist(int n)
{
 struct node *fnNode, *tmp;
 int num,i;
 stnode = (struct node *)malloc(sizeof(struct node));

 if(stnode == NULL)
 {
 printf(" Memory can not be allocated.");
 }
 else
 {
 printf(" Input data for node 1 : ");
 scanf("%d", &num);
 stnode-> num = num;
 stnode-> nextptr = NULL; 
 tmp = stnode;
 for(i=2; i<=n; i++)
 {
 fnNode = (struct node *)malloc(sizeof(struct node));
 if(fnNode == NULL) {
 printf(" Memory can not be allocated.");
 break;
 }
 else
 {
 printf(" Input data for node %d : ", i);
 scanf(" %d", &num);
 fnNode->num = num;
 fnNode->nextptr = NULL;
 tmp->nextptr = fnNode;
 tmp = tmp->nextptr;
 }
 }
 }
 }
 //INSERTION_PART//
 //NODE_INSERT_AT_BEGIN//
void nodeinsertatbegin(int num)
{
 struct node *fnNode;
 fnNode = (struct node*)malloc(sizeof(struct node));
 if(fnNode == NULL)
 {
 printf(" Memory can not be allocated.");
 }
 else
 {
 fnNode->num = num; 
 fnNode->nextptr = stnode; 
 stnode = fnNode; 
 }
 }
//NODE_INSERT_AT_END//
void nodeinsertatend(int num)
{
 struct node *fnNode, *tmp;
 fnNode = (struct node*)malloc(sizeof(struct node));
 if(fnNode == NULL)
 {
 printf(" Memory can not be allocated.");
 }
 else
 {
 fnNode->num = num; 
 fnNode->nextptr = NULL;
 tmp = stnode;
 while(tmp->nextptr != NULL)
 tmp = tmp->nextptr;
 tmp->nextptr = fnNode; 
 }
}
//NODE_INSERT_AT_MIDDLE//
void nodeinsertatmiddle(int num, int pos)
{
 int i;
 struct node *fnNode, *tmp;
 fnNode = (struct node*)malloc(sizeof(struct node));
 if(fnNode == NULL)
 {
 printf(" Memory can not be allocated.");
 }
 else
 {
 fnNode->num = num; 
 fnNode->nextptr = NULL;
 tmp = stnode;
 for(i=2; i<=pos-1; i++)
 {
 tmp = tmp->nextptr;
 if(tmp == NULL)
 break;
 }
 if(tmp != NULL)
 {
 fnNode->nextptr = tmp->nextptr; 
 tmp->nextptr = fnNode;
 }
 else
 {
 printf(" Insert is not possible to the given position.\n");
 }
 }
}
//DELETION PART//
//FIRST_NODE_DELETION//
void firstnodedeletion()
{
 struct node *toDelptr;
 if(stnode == NULL)
 {
 printf(" There are no node in the list.");
 }
 else
 {
 toDelptr = stnode;
 stnode = stnode->nextptr;
 printf("\n Data of node 1 which is being deleted is : %d\n", toDelptr->num);
 free(toDelptr); 
 }
}
//LAST_NODE_DELETION//
void lastnodedeletion()
{
 struct node *toDelLast, *preNode;
 if(stnode == NULL)
 {
 printf(" There is no element in the list.");
 }
 else
 {
 toDelLast = stnode;
 preNode = stnode;
 while(toDelLast->nextptr != NULL)
 {
 preNode = toDelLast;
 toDelLast = toDelLast->nextptr;
 }
 if(toDelLast == stnode)
 {
 stnode = NULL;
 }
 else
 {
 preNode->nextptr = NULL;
 }
 printf("\nData of Last node  which is being deleted is : %d\n", toDelLast->num);
 free(toDelLast);
 }
}
//MIDDLE_NODE_DELETION//
void middlenodedeletion(int pos)
{
 int i;
 struct node *toDelMid, *preNode;
 if(stnode == NULL)
 {
 printf(" There are no nodes in the List.");
 }
 else
 {
 toDelMid = stnode;
 preNode = stnode;
 for(i=2; i<=pos; i++)
 {
 preNode = toDelMid;
 toDelMid = toDelMid->nextptr;
 if(toDelMid == NULL)
 break;
 }
if(toDelMid != NULL)
 {
 if(toDelMid == stnode)
 stnode = stnode->nextptr;
 preNode->nextptr = toDelMid->nextptr;
 toDelMid->nextptr = NULL;
 printf("\nDeletion Succesfull at position %d",pos);
 free(toDelMid);
 }
 else
 {
 printf("\nDeletion can not be possible at position %d.\n",pos);
 }
 }
}
//SEARCHING_OPERATION//
void searchfromlinkedlist(int data)
{
int i,flag;
ptr=stnode;
while (ptr!=NULL)  
{  
if(ptr->num == data)  
    {  
        printf("\n%d Found At Node:%d\n",data,i+1);  
        flag=0;  
    }   
    else  
    {  
        flag=1;  
    }  
        i++;  
        ptr = ptr -> nextptr;  
    }
    if(flag==1)
    {
        printf("\n%d Not Found In Linked List",data);
    }  
        
}
void displaylinkedlist()
{
 struct node *tmp;
 if(stnode == NULL)
 {
 printf(" No data found in the list.");
 }
 else
 {
     printf("\nData Present In The Linked List\n");
 tmp = stnode;
 while(tmp != NULL)
 {
 printf("%d\t", tmp->num); 
 tmp = tmp->nextptr; 
 }
 }
}