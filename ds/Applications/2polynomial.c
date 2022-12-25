#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coffe;
    int expo;
    struct node *next;
};
struct node *insert_node(struct node* head , int cofe , int exp)
{
    struct node *ptr;
    struct node *temp=malloc(sizeof(struct node));
    temp->coffe=cofe;
    temp->expo=exp;
    temp->next=NULL;
    if(head==NULL || exp>(head->expo))
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL && ptr->next->expo >=exp)
            ptr=ptr->next;        
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return head;
}
struct node *create(struct node *head)
{
    int i,n,ex,cofe;
    printf("Enter polynomial with their stage data:-\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter coefficient for term-%d:-\n",i+1);
        scanf("%d",&cofe);

        printf("Enter exponent for term-%d:-\n",i+1);
        scanf("%d",&ex);

        head=insert_node(head,cofe,ex);
    }
    return head;
}

void print(struct  node *head)
{
    if(head==NULL)
    printf(".......No Polynomial......");
    else
    {
        struct  node *ptr=head;
        while(ptr!=NULL)
        {
            printf("(%dx^%d)",ptr->coffe,ptr->expo);
            ptr=ptr->next;
            if(ptr!=NULL)
            printf("+");
            else 
            printf("\n");
        }
    }
}

int main()
{
    struct node *head=NULL;
    head=create(head);
    print(head);
    return 0;
}