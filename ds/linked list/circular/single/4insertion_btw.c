#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node* add_node(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node *add_beg(struct node*tail,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return tail;
}
struct node *add_middle(struct node*tail,int data,int pos)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    struct node *ptr=tail->next;
    while(pos>1){
        ptr=ptr->next;
        pos--;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    if(ptr==tail)
    {
        tail=tail->next;
    }
    return tail;
}

int main()
{
    struct node *tail;
    tail=add_node(54);
    tail=add_beg(tail,78);
    tail=add_beg(tail,63);
    tail=add_middle(tail,96,3);
    struct node *ptr=tail->next;
    do
    {
        printf("%d\t%d\t%d\n",ptr->next,ptr->data,ptr);
        ptr=ptr->next;
    }while(ptr!=tail->next);
    return 0;
}