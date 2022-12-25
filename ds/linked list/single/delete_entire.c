#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
}; 
struct node* del_entire(struct node*head)
{
    struct node *temp=head;
    if(head==NULL)
    printf("empty");
    while(temp!=NULL)
    {
        temp=temp->link;
        free(head);
        head=temp;
    }
    return head;
}
int main()
{
    struct node *head,*ptr,*current;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=41;
    head->link=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=78;
    current->link=NULL;
    head->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=69;
    current->link=NULL;
    head->link->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=25;
    current->link=NULL;
    head->link->link->link=current;
    printf("before:-\n");
     ptr=head;
    while(ptr!=NULL){
        printf("%d\t%d->",ptr->data,ptr->link);
        ptr=ptr->link;
    }
    head=del_entire(head);
    printf("\nAfter:-\n");
    if(head==NULL)
    printf("empty");
    // free(head);
    // free(current);
    // free(ptr);
    return 0;
    
}
