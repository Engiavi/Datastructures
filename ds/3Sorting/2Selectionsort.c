#include <stdio.h>

int main()

{

int n;

printf("Enter the number of element\n"); scanf("%d",&n);

int a[n];

printf("Enter the elements of the array\n"); int i;

for(i=0;i<n;i++)

scanf("%d",&a[i]);

int j,t;

for(i=0;i<n-1;i++){

int min = i;

for (j = i+1; j < n; j++)

if (a[j] < a[min])

min = j;

if(min != i){

t=a[min];

a[min]=a[i];

a[i]=t;

}

}

printf("The array after sorting is\n");

for(i=0;i<n;i++)

printf("%d\n",a[i]);

return 0;

}
