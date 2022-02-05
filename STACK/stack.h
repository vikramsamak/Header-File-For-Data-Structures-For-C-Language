#include<stdio.h>
int stack[100],i,j,n,top=-1,noe;  
void stackdatastruct(int noe)
{
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
        printf("%d\n",stack [top]);  
    }  
}  
void push (int val)  
{        
    if (top == n )   
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
void search(int val)
{
    int a;
    
   for(a=-1;a<=top;a++)
    {
      
        if(stack[a]==val)
        {
            printf("\n%d Found At Index %d\n" ,stack[a],a);
        }  
        
    }
}
