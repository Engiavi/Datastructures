//missing number
#include <stdio.h>

int main()

{

int n;

printf("Enter the number of elements\n"); scanf("%d",&n);

int ar[n],i,sum=0;

printf("Enter the elements\n");

for(i=0;i<n;i++)

{

scanf("%d",&ar[i]);

}

for(i=0;i<n;i++)

{

sum=sum+ar[i];

}

int l=ar[n-1];

int ap=(l*(l+1))/2;

int ele=ap-sum;

printf("The missing number is %d",ele);

return 0;

}
