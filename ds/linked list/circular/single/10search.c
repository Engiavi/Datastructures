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
int search(struct node *tail,int elem)
{
    int index=1;
    struct node *temp=tail->next;
    if(tail==NULL)
    return -2;
    else
    {
        do
        {
            if(temp->data==elem)
            return index;
            temp=temp->next;
            index++;
        } while (temp!=tail->next);
        return -1;
    }
}

int main()
{
    struct node *tail;
    tail=create(tail);
    int elem,m;
    printf("...........Enter data to search:-............\n");
    scanf("%d",&elem);
    m=search(tail,elem);
    if(m==(-2))
    printf("no node is present");
    else if (m==(-1))
    {
        printf("*******Data is not found********");
    }
    else{
        printf("..........Element found at.---------->%d Node........",m);
    }
    
    return 0;
}