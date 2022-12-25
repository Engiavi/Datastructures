#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* end(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=temp;
    return temp;
}

int main()
{
    int data=65;
    struct node* tail;
    tail=end(data);
    printf("%d\t%d",tail->data,tail->link);
    return 0;
}