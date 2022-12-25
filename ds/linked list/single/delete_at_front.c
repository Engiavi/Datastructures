//delete first node
#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node *link;
};
struct node* del(struct node *head)
{
    if(head==NULL)
    printf("already empty");
    struct node *ptr=head;
    head=head->link;
    free(ptr);
    return head;
}
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }

}

int main()
{
    struct node *head=(struct node*) malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    struct node *current=(struct node*) malloc(sizeof(struct node));
    current->data=54;
    current->link=NULL;
    head->link=current;
    current=(struct node*) malloc(sizeof(struct node));
    current->data=78;
    current->link=NULL;
    head->link->link=current;
    head=del(head);
    print(head);
}