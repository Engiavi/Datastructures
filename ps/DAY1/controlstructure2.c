#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("enter three no.");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("greatest no is %d",a);
    }
    else if(b>c && b>a)
    {
        printf("greatest no. is %d",b);
    }
     else 
    {
        printf("greatest no. is %d",c);
    }
}