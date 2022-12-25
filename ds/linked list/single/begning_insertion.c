#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node* atnode(struct node* head,int data)
{
    if (head==NULL)
    printf("empty");
    struct node *start=(struct node*) malloc(sizeof(struct node));
    start->data=data;
    start->link=head;
    head=start;
    return head;


}

int main()
{
    struct node *head=(struct node*) malloc(sizeof(struct node));
    head->data=2;
    head->link=NULL;
     struct node *current=(struct node*) malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link=current;
    int data=5;
    head=atnode(head,data);
    struct node *ptr=head;
    
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}