#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

 void count_of(struct  node *head)
{
    int count=0;
    if (head==NULL)
    printf("EMPTY LINKED LIST");
    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d node is present in linked list",count);


}

int main()
{
    struct node *head=NULL;
    head=(struct node*) malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node*) malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link=current;

    current=(struct node*) malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;

    head->link->link=current;
    count_of(head);
}