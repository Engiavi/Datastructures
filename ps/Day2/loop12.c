#include<stdio.h>
void main()
{
    int i,n,j,k,l;
    printf("enter element n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(k=1;k<=i;k++)
        {
            printf("%d",k);
            //printf("\n");
        }
        printf("\n");
         /*for(j=0;j<n-i;j++)
        {
             printf(" ");
        }
        for(int l=1;l<=i;l++)
        {
            printf("%d",1+i-l);
            
        }
        printf("\n");*/
    }
}
