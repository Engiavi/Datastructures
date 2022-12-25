#include<stdio.h>
void main()
{
    int i,j=1,n,c=0,k;
    printf("enter n;-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;
        k=j/i;
        c+=k;
    }
    printf("%d",c);
    
}