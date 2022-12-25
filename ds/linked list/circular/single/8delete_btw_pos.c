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

struct node *del_btw(struct node *tail,int pos)
{
    if(tail==NULL)
    return tail;
    struct node *temp=tail->next;
    if(tail->next==NULL)
    {
        free(tail);
        tail=NULL;
        return tail;
    }
    while(pos>2)
    {
        temp=temp->next;
        pos--;
    }
    struct node *temp2=temp->next;
    temp->next=temp2->next;
    if(temp2==tail)
    {
        tail=temp;
    }
    free(temp2);
    temp2=NULL;
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
     int pos;
     printf("Which node do you want to delete.\n Enter its position:- ");
     scanf("%d",&pos);
    tail=del_btw(tail,pos);
    printf("\nafter\n");
    display(tail);
    return 0;
}
