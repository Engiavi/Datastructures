//insertion the given array
#include <stdio.h>

int main()

{

int a[100],n,ele,pos;

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements of the array\n"); int i;

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("Enter the elements to be inserted\n"); scanf("%d",&ele);

printf("Enter the position at which the element needs to be inserted\n"); scanf("%d",&pos);

n++;

for(i=n-1;i>=pos;i--)

a[i]=a[i-1];

a[pos-1]=ele;

printf("The array after inserting the element is:\n"); for(i=0;i<n;i++)

printf("%d\n",a[i]);

return 0;

}
