#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* create(int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp;
    temp->data=data;
    temp->next=temp;
    return temp;
}

int main()
{
    int data=67;
    struct node*tail;
    tail=create(data);
    printf("%d\t%d\t%d",tail->prev,tail->data,tail->next);
    return 0;
}