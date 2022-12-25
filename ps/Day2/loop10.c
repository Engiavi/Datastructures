#include<stdio.h>
void main()
{
    int i,n,j,k;
    printf("enter element n");
    scanf("%d",&n);
      for(i=n;i>1;i--)
    {
        for(j=0;j<n-i;j++)
        {
             printf(" ");
        }
         for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
       printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
             printf(" ");
        }
       
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
       printf("\n");
    }
}
