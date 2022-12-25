#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *create_node(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node *create_end(struct node *tail,int data)
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
    printf("Enter no. of nodes:-\n");
    scanf("%d",&n);
   if (n==0)
   {
    return tail;
   }
   else{
    printf("Enter data for node-1:-\n");
    scanf("%d",&data);
    tail=create_node(data);
    for(i=1;i<n;i++)
    {
         printf("Enter data for node-%d:-\n",i+1);
         scanf("%d",&data);
         tail=create_end(tail,data);
    }
   }
   return tail;
}
void count(struct node *tail)
{
    int c=0;
    struct node *temp=tail->next;
    do{
        c++;
        temp=temp->next;
        
    }while(temp!=tail->next);
    printf("total node is-%d",c);
}
int main()
{
    struct node *tail;
    tail=create(tail);
    count(tail);
    return 0;
}