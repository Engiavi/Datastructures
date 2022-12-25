#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *top=NULL;


int isempty()
{
    if(top==NULL)
    return 1;
    else 
    return 0;
}

void push(int data)
{
    struct node *temp;
    temp=malloc(sizeof(temp));
    if(temp==NULL)
    {
        printf("stack overflow");
        exit(1);
    }
    temp->data=data;
    temp->next=top;
    top=temp;
    printf("%d is inserted",data);
}

int pop()
{
    struct node *temp;
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    temp=top;
    int v=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return v;
}
int peek()
{
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    return top->data;
}
void print()
{
    struct node *temp;
    temp=top;
     if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    
    
    while(temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
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