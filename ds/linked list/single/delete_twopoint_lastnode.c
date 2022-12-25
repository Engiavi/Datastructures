//using two [pointer]
#include<stdio.h>
#include<stdlib.h>
struct node
 {
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
    struct node *temp2=head;
    while(temp->link!=NULL)
    {
        temp2=temp;
        temp=temp->link;
    } 
    temp2->link=NULL;
    free(temp);
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
 
 