#include<stdio.h>
#include<stdlib.h>

#define m 4
int stack[m];
int top=-1;

int isfull()
{
    if(top==m-1) 
       return 1;
    else
       return 0;
}
int isempty()
{
    if(top==-1)
       return 1;
    else
       return 0;
}

void push(int data)
{
    if(isfull())
    {
        printf("stack verflow\n");
        return;
    }
    top+=1;
    stack[top]=data;
     printf("%d is inserted\n",data);
}

int pop()
{
    int data;
    if(isempty())
    {
        printf("stack underflow!!");
        exit(1);
    }
    data=stack[top];
    top--;
    return data;
}
int peek()
{
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    return stack[top];
}
void print()
{
   if(isempty())
    {
        printf("stack underflow");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf(" %d ",stack[i]);
    }
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Print top element\n");
        printf("4.Print all element\n");
        printf("5.exit\n");
        printf("Enter Choice to Perform Stack operations:-\n");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:
            printf("Enter data :");
            scanf("%d",&data);
            push(data);
            break;
            
            case 2:
            data=pop();
            printf(" %d is deleted",data);
            break;
            
            case 3:
            printf(" %d is top element",peek());
            break;
            
            case 4:
           print();
            break;
            
            case 5:
           exit(1);
            break;
            
            default:
            printf("enter wrong choice");
        }
    }
}