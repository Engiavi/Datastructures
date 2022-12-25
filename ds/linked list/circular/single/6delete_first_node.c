#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_node(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node *add_end(struct node*tail, int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return temp;
}
struct node *create(struct node *tail)
{
    int i,n,data;
    printf("Enter n:-\n");
    scanf("%d",&n);
    if(n==0)
    return tail;
    else{printf("enter data for node-1:-\n");
    scanf("%d",&data);
    tail=add_node(data);

    for(i=1;i<n;i++)
    {
        printf("enter data for node-%d:-\n",i+1);
        scanf("%d",&data);
        tail=add_end(tail,data);
    }}
    return tail;
}
struct node *delete_first(struct node* tail)
{
    struct node *temp;
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
    temp=NULL;
}

int main()
{
    struct node *tail;
   tail= create(tail);
    struct node *ptr=tail->next;
    printf("before:\n");
   do
   {
    printf("%d\t%d\t%d\n",ptr,ptr->data,ptr->next);
    ptr=ptr->next;
   } while (ptr!=tail->next);
   printf("after:\n");
   delete_first(tail);
    struct node *temp=tail->next;
   do
   {
    printf("%d\t%d\t%d\n",temp,temp->data,temp->next);
    temp=temp->next;
   } while (temp!=tail->next);
  
   return 0;
   
}