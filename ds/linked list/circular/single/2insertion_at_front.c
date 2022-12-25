#include<stdio.h>
#include<stdlib.h>

struct node{
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
struct node *add_beg(struct node *tail,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return tail;
}

int main()
{
    struct node *tail;
    tail=add_node(65);
    tail=add_beg(tail,96);
    struct node *ptr=tail->next;
    do
    {
        printf("%d\t%d\t%d\n",ptr->data,ptr->next,ptr);
        ptr=ptr->next;
    }while(ptr!=tail->next);
    return 0;

}