#include <stdio.h>

int binary(int a[],int n, int ele){

int f=0,l=n-1,mid;

while(f<=l){

mid=f+(l-f)/2;

if(ele==a[mid])

return mid;

else if(ele>a[mid])

f=mid+1;

else if(ele<a[mid])

l=mid-1;

}

return 0;	}

int main(){

int n,a[100],ele,i;

printf("Enter the number of elemnets\n"); scanf("%d",&n);

printf("Enter the elements of the array\n"); for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("Enter the element to be searched\n"); scanf("%d",&ele);

int result = binary(a,n,ele);

if(result==0)

printf("Element not found");

else

printf("Element found at %d",result+1); return 0;

}
