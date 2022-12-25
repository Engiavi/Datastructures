#include<stdio.h>
#include<stdlib.h>
struct node{
    int coffecient;
    int exponent;
    struct node *next;
};

struct node *insert_node(struct node *head,int ex,int cof)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->coffecient=cof;
    temp->exponent=ex;
    temp->next=NULL;
    if(head==NULL || ex>(head->exponent))
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL && ptr->next->exponent >=ex)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return head;
}

struct node *create(struct node *head)
{
    int i,n,cof,ex;
    printf("Enter terms for polynomial");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter coffecient for term-%d:-\n",i+1);
        scanf("%d",&cof);
        printf("Enter exponent for term-%d:-\n",i+1);
        scanf("%d",&ex);
        head=insert_node(head,ex,cof);
    }
    return head;
}
void print(struct node *head)
{
    if (head==NULL)
    printf("no polynomial");
    else
    {
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            printf("(%dx^%d)",ptr->coffecient,ptr->exponent);
            ptr=ptr->next;
            if(ptr!=NULL)
            printf("+");
            else
            printf("\n");
        }
    }
}
void add(struct node *head1,struct node *head2)
{
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    struct node *head3=NULL;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->exponent == ptr2->exponent)
        {
            head3=insert_node(head3,ptr1->exponent,ptr1->coffecient+ptr2->coffecient);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->exponent > ptr2->exponent)
        {
            head3=insert_node(head3,ptr1->exponent,ptr1->coffecient);
            ptr1=ptr1->next;
        }
        else
        {
            head3=insert_node(head3,ptr2->exponent,ptr2->coffecient);
            ptr2=ptr2->next;
        }
    }
    while(ptr1!=NULL)
    {
        head3=insert_node(head3,ptr1->exponent,ptr1->coffecient);
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        head3=insert_node(head3,ptr2->exponent,ptr2->coffecient);
        ptr2=ptr2->next;
    }
    printf("Polynomial Addition is:-\n");
    print(head3);

}

int main()
{
    struct node *head1=NULL;
    printf("Enter for polynomial-1\n");
    head1=create(head1);

    struct node *head2=NULL;
    printf("Enter for polynomial-2\n");
    head2=create(head2);

    add(head1,head2);

    return 0;
}