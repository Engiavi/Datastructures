#include<stdio.h>
#include<stdlib.h>

struct node{
    float coffecient;
    int exponent;
    struct node *next;
};

struct node *insert_node(struct node *head,float coffe,int exp)
{
    struct node *ptr;
    struct node *temp=malloc(sizeof(struct node));
    temp->coffecient=coffe;
    temp->exponent=exp;
    temp->next=NULL;
    if(head==NULL || exp > (head->exponent))
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL && ptr->next->exponent >=exp)
           ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return head;
}
struct node *create(struct node *head)
{
    int i,n,exp;
    float coffe;
    printf("enter polynomial's term:-\n");
    scanf("%d",&n);   
        for(i=0;i<n;i++)
        {
            printf("Enter coeffecint of-%d:-",i+1);
            scanf("%f",&coffe);

            printf("Enter exponent of-%d:-",i+1);
            scanf("%d",&exp);

            head=insert_node(head,coffe,exp);
        }
        return head;
}
void print(struct node *head)
{
    
    if(head==NULL)
    printf("no polynomial");
    else
    {
       struct node *temp=head;
        while(temp!=NULL)
        {
            printf("(%.1fx^%d)",temp->coffecient,temp->exponent);
            temp=temp->next;
            if(temp!=NULL)
            printf(" + ");
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