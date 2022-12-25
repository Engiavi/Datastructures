#include<stdio.h>
#include<stdlib.h>
//..........................program for insertion in between by data value ................................
struct node{
    struct node *prev;
    int data;
    struct node* next;
};
void add_end(struct node* head,int data)
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
void add_btw(struct node* head,int key){
    if(head==NULL)
    printf("empty");
    struct node*ptr=head;
    struct node*temp=head;
    while(temp->data!=key)
    {
        temp=temp->next;
    }
  struct node* btw=(struct node*)malloc(sizeof(struct node));
    btw->data=1;
    btw->prev=NULL;
    btw->next=NULL;
    if(temp->next==NULL)
    {
        temp->next=btw;
        btw->prev=temp;
    }
    else{
    ptr=temp->next;
    temp->next=btw;
    ptr->prev=btw;
    // btw->data=1;
    btw->prev=temp;
    btw->next=ptr;}
} 


int main()
{
       struct node* head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=36;
    head->next=NULL;
    add_end(head,12);
    add_end(head,5);
    add_end(head,78);
    add_end(head,23);
    add_btw(head,23);//..........................enter node after 3 node................................
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->next);
        ptr=ptr->next;
    }
    return 0;
}