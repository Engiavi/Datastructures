#include<stdio.h>
 
int main()
{
 long int x,i,j,k,n,sq,cnt;
 double fact,sum=0.0;
 printf("\n ENTER THE VALUE OF N: ");
 scanf("%ld",&n);
 printf("\n ENTER THE VALUE OF X: ");
 scanf("%ld",&x);
 for(i=1,cnt=1;i<=n;i=i+2,cnt++)
 {
  for(j=1,sq=1;j<=i;j++)
   sq=sq*x;
 
  for(k=1,fact=1;k<=i;k++)
   fact=fact*k;
  if(cnt%2==1)
   sum=sum+(sq/fact);
  else
   sum=sum-(sq/fact);

 }
   printf("\n THE SUM OF THIS SERIES IS %.2lf\n",sum);
}