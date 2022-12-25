#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,k,x;
    float c=1.0,j=1.0;
    printf("enter n,x;-");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++)
    {
        j=j*i;
        k=pow(x,i);
        c=k/j+c;
    }
    printf("%f",c);
    
}