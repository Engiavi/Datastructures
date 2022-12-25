//symmetric difference
#include <stdio.h>

void symmDiff(int arr1[], int arr2[], int n, int m)

{

int i = 0, j = 0;

printf("The symmetric difference is\n"); while (i < n && j < m) {

if (arr1[i] < arr2[j]) {

printf("%d\n",arr1[i]);

i++;

}

else if (arr2[j] < arr1[i]) {

printf("%d\n",arr2[j]);

j++;	}

else {

i++;

j++;	}	}

}

int main(){

int n,m;

printf("Enter the number of elements in first set\n"); scanf("%d",&n);

printf("Enter the number of elements in second set\n"); scanf("%d",&m);

int arr1[n],arr2[m];

printf("Enter element of first set\n");

for(int i=0;i<n;i++)

scanf("%d",&arr1[i]);

printf("Enter element of second set\n"); for(int i=0;i<m;i++) scanf("%d",&arr2[i]);

symmDiff(arr1, arr2, n, m);

return 0;	}
