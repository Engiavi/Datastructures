//set interection
#include <stdio.h>

int main()

{

int a[100],b[100],c[100],n,m,co=0,i,j,k;

printf("Enter number of elements of first array\n"); scanf("%d",&n);

printf("Enter the number of elements in second array\n"); scanf("%d",&m);

printf("Enter the elments of the first array\n"); for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("Enter the element of the second array\n"); for(i=0;i<m;i++){

scanf("%d",&b[i]);

k=0;

for(j=0;j<n;j++){

if(a[j]==b[i]){

k++;

break; }

}

if(k==1){

c[i]=b[i];

co++;}

}

printf("Array after intersection is\n"); for(i=0;i<co;i++)

printf("%d\n",c[i]);

return 0;

}
