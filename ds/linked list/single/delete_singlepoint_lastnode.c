#include<stdio.h>
#include<stdlib.h>
//delete last node using single pointer
struct node{
    int data;
    struct node *link;

};
void del_last(struct node*head)
{
    if(head==NULL)
    {
        printf("empty");
    }
    struct node *temp=head;
 
    while(temp->link->link!=NULL)
    {
        
        temp=temp->link;
    } 
    temp->link=NULL;
    free(temp->link);
}
 void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t%d\n",ptr->data,ptr->link);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=45;
    current->link=NULL;
    head->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=78;
    current->link=NULL;
   head->link->link=current;
    del_last(head);
    print(head);
    return 0;
}