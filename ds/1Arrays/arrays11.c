//set difference
#include <stdio.h>

int main(){

int i,j,n,m,t,k=0;

printf("Enter the number the elements in first array\n"); scanf("%d",&n);

printf("Enter the number of elements of second array\n"); scanf("%d",&m);

printf("Enter the elements of first array\n"); int a[100],b[100],c[100];

for ( i = 0; i < n; i++)

scanf("%d",&a[i]);

printf("Enter the elemnets of second array\n"); for ( i = 0; i < m; i++)

scanf("%d",&b[i]);

for ( i = 0; i < n; i++){

t=0;

for(j=0;j<m;j++){

if(a[i]==b[j])

t=1;

}

if(t==0){

c[k]=a[i];

k++;}

}

printf("Array after difference is\n");

for ( i = 0; i < k; i++)

printf("%d\n",c[i]);

return 0;	}
