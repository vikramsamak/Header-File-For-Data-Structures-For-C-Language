#include<stdio.h>
int stack[100],i,j,n,top=-1,noe;  
void stackdatastruct()
{   
    int noe;
    printf("\nEnter Number Of Elements Of Stack: ");
    scanf("%d",&noe);
    n=noe;
    int stack[n];
}
void peek()  
{  
    if (top == -1)   
    {  
        printf("Underflow");  
    }  
    else  
    {  
        printf("\nTopmost Element:%d\n",stack [top]);  
    }  
}  
void push ()  
{   
    int val;
    printf("\nEnter The Value To Push: ");
    scanf("%d",&val);     
    if (top == n-1 )   
    printf("\nOverflow\n");   
    else   
    {  
        top = top +1;   
        stack[top] = val;   
    }   
} 
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void stackdisplay()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("\nStack is empty\n");  
    }  
}
void search()
{   
    int val;
    printf("\nEnter The Data To Seearch From Stack: ");
    scanf("%d",&val);
    int a,flag;
    
   for(a=-1;a<=top;a++)
    {
      
        if(stack[a]==val)
        {
            printf("\n%d Found At Index %d\n" ,stack[a],a);
            flag=1;
        }  
        
    }
    if (flag!=1)
    {
        printf("\nGiven Is Element Not Present In The Stack");
    }
    printf("\n");
}
