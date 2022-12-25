#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insertatl(struct node * head)
{
    if (head == NULL)
    printf("empty");
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->data=78;
    temp->link=NULL;
    struct node *ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head=(struct node*) malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *current =(struct node*) malloc(sizeof(struct node));
    current->data=54;
    current->link=NULL;
    head->link=current;
    insertatl(head);
    print(head);

}