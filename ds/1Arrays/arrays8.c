//merging of two sorted array
#include <stdio.h>

int main(){

int n,m,i,j,c[100];

printf("Enter the number of elements of first array\n"); scanf("%d",&m);

printf("Enter the number of elements of second array\n"); scanf("%d",&n);

printf("Enter the element of first array\n"); int a[m],b[n];

for(i=0;i<m;i++)

scanf("%d",&a[i]);

printf("Enter the elements of second array\n"); for(i=0;i<n;i++)

scanf("%d",&b[i]);

i=j=0;

for(int k=0;k<m+n;k++) {

if(i<m && j<n){

if(a[i]<b[j]) {

c[k]=a[i];

i++; }

else{

c[k]=b[j];

j++;	}	}

else if(i<m){

c[k]=a[i];

i++; }

else{

c[k]=b[j];

j++; }

}

printf("merged array is\n");

for(int k=0;k<m+n;k++)

printf("%d ",c[k]);

return 0;}
