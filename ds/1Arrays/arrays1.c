//traversal
#include <stdio.h>

int main()

{

int n;

printf("Enter number of elements\n");

scanf("%d",&n);

int a[n];

printf("Enter elements of array\n");

for(int i=0;i<n;i++)

scanf("%d",&a[i]);

printf("The elements of array are\n");

for(int i=0;i<n;i++)

printf("%d\n",a[i]);

return 0;

}
