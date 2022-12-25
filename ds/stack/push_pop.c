#include<stdio.h>
#include<stdlib.h>
#define m 4
int stack[m];
int top=-1;

void push(int data)
{
    if(top==m-1)
    {
        printf("stack overflow!!");
        return;
    }
    top=top+1;
    stack[top]=data;
}
int pop()
{
    int data;
    if(top==-1)
    {
        printf("stack underflow!!");
        exit(1);
    }
    data=stack[top];
    top=top-1;
    return data;
}
void print()
{
    if(top==-1)
    {
         printf("stack underflow!!");
         return; 
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    int data;
    push(1);
     push(2);
      push(3);
       push(4);
   data=pop();
   printf("%d ",data);

   
    //    print();
       return 0;
}