#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
}; 
void del_node(struct node **head,int key)
{
    struct node *temp1,*temp2;
    temp1=*head;
    temp2=*head;
    if(*head==NULL)
    printf("linked list is already empty");
    else if(temp1->data==key)
    {
        temp1=temp2->link;
        free(temp2);
        temp2=NULL;
        *head=temp1;
    }
    else{
        while(temp1->data!=key)
        {
            temp2=temp1;
            temp1=temp1->link;
        }
        temp2->link=temp1->link;
        temp1=NULL;
        free(temp1);
    }
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
    del_node(&head,25);
    printf("\nAfter:-\n");
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t%d->",ptr->data,ptr->link);
        ptr=ptr->link;
    }
    free(head);
    free(current);
    free(ptr);
    return 0;
    
}
