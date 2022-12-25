#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

struct node *create_node(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}

struct node *create_end(struct node *tail,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return temp;
}

struct node *create(struct node *tail)
{
    int i,n,data;
    printf("enter no. of node:-\n");
    scanf("%d",&n);
    if(n==0)
    return tail;
    else
    {
        printf("enter data of node-1:-\n");
        scanf("%d",&data);
        tail=create_node(data);
        for(i=1;i<n;i++)
        {
            printf("enter no. of node-%d:-\n",i+1);
            scanf("%d",&data);
            tail=create_end(tail,data);
        }
    }
    return tail;
}

struct node *del_last(struct node *tail)
{
    if (tail==NULL)
    return tail;
    if(tail->next==tail)
    {
        free(tail);
        tail=NULL;
        return tail;

    }
    struct node *temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=tail->next;
    free(tail);
    tail=temp;
    return tail;
}

struct node *display(struct node *tail)
{
    
    struct node *temp=tail->next;
   do
   {
    printf("%d\t%d\t%d\n",temp,temp->data,temp->next);
    temp=temp->next;
   } while (temp!=tail->next);
}
int main()
{
    struct node *tail;
    tail=create(tail);
    printf("\nbefore\n");
     display(tail);
    tail=del_last(tail);
    printf("\nafter\n");
    display(tail);
    return 0;
}
