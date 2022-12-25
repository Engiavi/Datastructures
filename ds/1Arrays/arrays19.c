//matric transpose
#include <stdio.h>

int main()

{

int m,n,i,j;

printf("Enter the order of the matrix\n"); scanf("%d%d",&m,&n);

int a[100][100],b[100][100];

printf("Enter the element of the matrix\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

scanf("%d",&a[i][j]);

}

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

b[j][i]=a[i][j];

}

printf("The matrix after transpose is\n");

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

printf("%d\n",b[i][j]);

}

return 0;

}
