#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("enter element n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",69-i+j);
            
        }
        printf("\n");
    }
}