#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* add(struct node* head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node* beg(struct node* head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    
    
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head=add(head,45);
    head=beg(head,95);
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->next);
        ptr=ptr->next;
    }
}