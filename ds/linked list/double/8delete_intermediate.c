#include<stdio.h>
#include<stdlib.h>
//..........................program to delete_intermediate node...............................
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* add_to_empty(struct node* head,int data)
{
    if(head==NULL)
    printf("empty");
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node* add_to_end(struct node* head,int data)
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    ptr->next=temp;
    temp->prev=ptr;
    temp->data=data;
    temp->next=NULL;
    return head;
}
struct node* create(struct node* head)
{
    int i,n,data;
    printf("enter no. of nodes:-");
    scanf("%d",&n);
    if(n==0)
    return head;
else{
   printf("enter data for node1:-");
   scanf("%d",&data);
   head=add_to_empty(head,data);
   for(i=1;i<n;i++)
   {
    printf("enter data for node%d:-",i+1);
    scanf("%d",&data);
    head=add_to_end(head,data);
   }
   }
   return head;
}
struct node* delete_inter_node(struct node* head,int key)
{
    struct node* ptr=head;
    struct node* temp=NULL;
    while(ptr->data!=key)
    {
        ptr=ptr->next;
    }
    temp=ptr->prev;
    temp->next=ptr->next;
    ptr->next->prev=temp;
    free(ptr);
    ptr=NULL;
}
int main()
{
    struct node* head=NULL;
    head=create(head);
    int data;
    printf("which middle node you want to delete:-\n");
    scanf("%d",&data);
    delete_inter_node(head,data);
    struct node* ptr=head;
    printf("now linked list is:-");
    while(ptr!=NULL)
    {
       printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}