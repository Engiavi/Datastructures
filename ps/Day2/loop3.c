#include<stdio.h>
void main()
{
    int i,n;
    printf("enter element n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",65+i);
        }
        printf("\n");
    }
}