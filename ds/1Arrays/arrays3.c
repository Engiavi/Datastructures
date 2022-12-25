
#include <stdio.h>

int main()

{

int a[100],n,ele;

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements of the array\n"); int i;

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("Enter the elements to be inserted\n"); scanf("%d",&ele);

i = n-1;

while(ele<a[i] && i>=0)

{

a[i+1] = a[i];

i--;

}

a[i+1] = ele;

n++;

printf("The array after inserting the element is:\n"); for(i=0;i<n;i++)

printf("%d\n",a[i]);

return 0;

}
