#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* pre;
    int data;
    struct node* next;

};
struct node* add_node(struct node* head,int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->pre=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
void print(struct node* head)
{
     struct node* temp=head;
     while(temp!=NULL)
     {
        printf("%d\t%d\t%d\n",temp->pre,temp->data,temp->next);
        temp=temp->next;
     }
}

int main()
{
    struct node* head;
    head=NULL;
    head=add_node(head,21);
    print(head);
}