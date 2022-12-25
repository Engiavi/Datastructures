#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *add_node(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
struct node *add_end(struct node* head,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
      struct node *ptr=head;
     while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return head;
}
struct node *create(struct node *head)
{
    int i,n,data;
    printf("Enter no of nodes:-\n");
    scanf("%d",&n);
    if(n==0)
    return head;
else{
    printf("enter data for node-1:-\n");
     scanf("%d",&data);
     head=add_node(data);

     for(i=1;i<n;i++){
    printf("enter data for node-%d:-\n",i+1);
     scanf("%d",&data);
     head=add_end(head,data);
     }}
     return head;
}

int main(){
    struct node *head;
    head=create(head);

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\t%d\n",ptr->data,ptr->next,ptr);
        ptr=ptr->next;
    }
    return 0;
}