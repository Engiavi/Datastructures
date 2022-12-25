#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
 };
void add(struct node* head,int data)
{
    if(head==NULL)
    printf("empty");
    struct node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    ptr->next=temp;
    temp->prev=ptr;
    temp->data=data;
    temp->next=NULL;
}

int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=36;
    head->next=NULL;
    add(head,12);
    add(head,5);
    add(head,78);
    add(head,23);
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->next);
        ptr=ptr->next;
    }
    return 0;
    
}