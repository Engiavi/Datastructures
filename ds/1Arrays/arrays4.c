//deletion
#include <stdio.h>

int main()

{

int a[100],n,ele;

printf("Enter number of elements\n");

scanf("%d",&n);

printf("Enter the elements of an array\n"); int i;

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("Enter the element to be deleted\n"); scanf("%d",&ele);

int t;

for(i=0;i<n;i++)

{

if(a[i]==ele)

t=i+1;

}

for(i=t;i<n;i++)

a[i-1]=a[i];

n--;

printf("The array after deletion is:\n"); for(i=0;i<n;i++)

printf("%d\n",a[i]);

return 0;

}
