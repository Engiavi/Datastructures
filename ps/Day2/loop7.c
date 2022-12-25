#include<stdio.h>
void main()
{
    int i,n,j,k,l;
    printf("enter element n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
             printf(" ");
        }
       for(l=i;l>1;l--)
        printf("%d",l);
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }

       printf("\n");
    }

}