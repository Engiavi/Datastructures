#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node* insert_node(int data,struct node *ptr)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}

int main()
{
    struct node *head=(struct node*) malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;
    struct node *ptr=head;
    ptr=insert_node(2,ptr);
    ptr=insert_node(3,ptr);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\n",ptr->data,ptr->link);
        ptr=ptr->link;
    }

}