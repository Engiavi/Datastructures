#include<stdio.h>
#include<stdlib.h>
//whaen already a single linked list has created
struct node{
    int data;
    struct node *link;
    
};
void insert_end(struct node *head)
{
    if(head==NULL)
    printf("EMPTY LINKED LIST");
    struct node *ptr=NULL;
    ptr=head;
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->data=64;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
 void print(struct  node *head)
{
    // int count=0;
    if (head==NULL)
    printf("EMPTY LINKED LIST");
    struct node *ptr=NULL;
    ptr=head;

    while(ptr!=NULL)
    {
        printf("|%d \t%d| -> ",ptr->data,ptr->link);
        ptr=ptr->link;
    }
    free(ptr);
}

int main()
{
    struct node *head=(struct node*) malloc(sizeof(struct node));
    head->data=54;
    head->link=NULL;
    struct node *current=(struct node*) malloc(sizeof(struct node));
    current->data=74;
    current->link=NULL;
    head->link=current;
    current=(struct node*) malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link->link=current;
    (insert_end(head));
    print(head);
    return 0;

}

