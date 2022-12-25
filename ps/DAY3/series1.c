#include<stdio.h>
void main()
{
    int i,j=1,n,c=0;
    printf("enter n;-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j*=i;
        c+=j;
    }
    printf("%d",c);
    
}