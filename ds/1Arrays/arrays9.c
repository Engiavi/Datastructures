//set union
#include <stdio.h>

int main()

{

int a[100],b[100],c[100],n,m;

printf("Enter number of elements of first array\n"); scanf("%d",&n);

printf("Enter the number of elements in second array\n"); scanf("%d",&m);

int i;

printf("Enter the elments of the first array\n"); for(i=0;i<n;i++) {

scanf("%d",&a[i]);

c[i]=a[i];

}

int k=i,j,count;

printf("Enter the element of the second array\n"); for(i=0;i<m;i++) {

count=0;

scanf("%d",&b[i]);

for(j=0;j<n;j++) {

if(c[j]!=b[i])

count++;

}

if(count==n){

c[k]=b[i];

k++;	}

}

printf("Array after union is\n");

for(i=0;i<k;i++)

printf("%d\n",c[i]);

return 0;}
