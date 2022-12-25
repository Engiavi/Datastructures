#include<stdio.h>
void main()
{
    int x,y;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    printf("it lies in first quadrant");
    else if(x<0 && y>0)
    printf("it lies in second quadrant");
    else if(x<0 && y<0)
    printf("it lies in third quadrant");
    else 
    printf("it lies in fourth quadrant");
}