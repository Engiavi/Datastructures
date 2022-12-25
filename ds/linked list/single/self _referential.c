#include<stdio.h>

// struct code{
//     int data;
//     struct code *ptr;//by using this format it is called as self referential pointer;
// };

// int main()
// {

// }
struct bg{
    int data;
    int roll;
};
void print( struct bg *h)
{
    printf("%d %d\n",h->data,h->roll);
}

int main()
{
    struct bg p1={12,10};
    struct bg p2={42,505};
    print(&p1);
    print(&p2);
    return 0;

}