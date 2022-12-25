//matrix multiplication
#include <stdio.h>

int main()

{

int i,j,m,n,p,q;

printf("Enter the order of the first matrix\n"); scanf("%d%d",&m,&n);

printf("Enter the order of second matrix\n"); scanf("%d%d",&p,&q);

int a[m][n],b[p][q],c[m][q],k;

if(n==p){

printf("Enter the elements of the first matrix\n"); for(i=0;i<m;i++){

for(j=0;j<n;j++)

scanf("%d",&a[i][j]);	}

printf("Enter the elements of second matrix\n"); for(i=0;i<p;i++){

for(j=0;j<q;j++)

scanf("%d",&b[i][j]);	}

for(i=0;i<m;i++){

for(j=0;j<p;j++){

c[i][j]=0;

for(k=0;k<n;k++)

c[i][j]=c[i][j]+a[i][k]*b[k][j];	}

}

printf("Matrix after multiplication is\n"); for(i=0;i<m;i++){

for(j=0;j<p;j++)

printf("%d\t",c[i][j]);	
printf("\n");
}
 

}

return 0;
 

}
 
