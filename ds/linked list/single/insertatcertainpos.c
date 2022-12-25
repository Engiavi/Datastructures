#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void add(struct node *head,int key)
{
    if(head==NULL)
    printf("EMPTY");
    struct node *ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=65;
    ptr2->link=NULL;
    struct node *temp=head;
    while(temp->data!=key)
    {
        temp=temp->link;
    }
    ptr2->link=temp->link;
    temp->link=ptr2;
}
void print(struct node *head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=21;
    head->link=NULL;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=45;
    ptr->link=NULL;
    head->link=ptr;

    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=78;
    ptr->link=NULL;
    head->link->link=ptr;
    add(head,45);
    print(head);
    return 0;
}

