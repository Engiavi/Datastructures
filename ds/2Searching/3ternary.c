#include <stdio.h>
int ternary(int a[],int m,int ele){
int m1,m2,c=0,beg=0,end=m-1;
while (beg<=end){
m1=beg+(end-beg)/3;
m2=m1+(end-beg)/3;
if(ele==a[m1])
return m1;
else if (ele==a[m2])
return m2;
else if(ele<a[m1])
end=m1-1;
else if(ele>a[m2])
beg=m2+1;
else{
beg=m1+1;
end=m2-1;
}
}
return 0;
}
int main() {
int m,a[100],ele;;
printf("Enter the number of elements of the array\n"); scanf("%d",&m);
printf("Enter the elements of the array\n"); for (int i = 0; i < m; i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched\n"); scanf("%d",&ele);
int result=ternary(a,m,ele);
if(result==0)
printf("Element not found");
else
printf("Element found at index %d",result); return 0; 
}