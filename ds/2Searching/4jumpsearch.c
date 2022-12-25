#include <stdio.h>
#include <math.h>
int min(int a, int b){
if(b>a)
return a;
else
return b; 
}
int jumpsearch(int arr[], int x, int n) { int step = sqrt(n),prev=0;
while (arr[min(step, n)-1] < x){
prev = step;
step += sqrt(n);
if (prev >= n)
return -1;	}
while (arr[prev] < x){
prev++;
if (prev == min(step, n))
return -1;	}
if (arr[prev] == x)
return prev;
return -1;	}
int main(){
int m,a[100],ele;
printf("Enter the number of elements of the array\n"); scanf("%d",&m);
printf("Enter the elements of the array\n"); for (int i = 0; i < m; i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched\n"); scanf("%d",&ele);
int index = jumpsearch(a, ele, m);
if(index >= 0)
printf("Number is at %d index",index);
else
printf("Number is not exist in the array");
return 0;	
}
