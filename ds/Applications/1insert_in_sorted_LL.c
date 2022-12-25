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
    temp->next=NULL;
    return temp;
}
struct node *create_end(struct node *head,int data)
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
    printf("Enter no. of nodes:-........................\n");
    scanf("%d",&n);
    if(n==0)
    return head;
    else{
        printf("Enter data for node-1:-\n");
        scanf("%d",&data);
        head=create_node(data);
        for(i=1;i<n;i++)
        {
             printf("Enter data for node-%d:-..........................\n",i+1);
            scanf("%d",&data);
            head=create_end(head,data);
        }
    }
    return head;
}
struct node *insert_node(struct node * head)
{
    int data,key;
    struct node *ptr;
    printf("..............enter data to perform insertion:-\n");
    scanf("%d",&data);
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    key=data;
    if(head==NULL||key < head->data)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL && ptr->next->data < key)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return head;
}
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\n",ptr->data,ptr->next);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *head;
    head=create(head);
    head=insert_node(head);
    print(head);
    return 0;
}
