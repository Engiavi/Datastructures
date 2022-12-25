#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter 3 sides");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s1==s3 && s2==s3 )
    printf("it  is equilateral triangle");
    else if(s1!=s2 && s2!=s3 && s1!=s3)
    printf("it  is scalar triangle");
    else
    printf("it is isoceles triangle");

}