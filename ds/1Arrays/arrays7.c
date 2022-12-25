//REvesrse array
#include <stdio.h>
int main()

{
    int n;

    printf("Enter the number of elements\n"); scanf("%d",&n);

    int a[n],i;

    printf("Enter the array\n");

    for(i=0;i<n;i++)

    scanf("%d",&a[i]);

    int t;

    for(i=0;i<=n/2;i++)

    {

    t=a[i];

    a[i]=a[n-i-1];

    a[n-i-1]=t;

    }

    printf("The reversed array is\n");

    for(i=0;i<n;i++)

    printf("%d\n",a[i]);

    return 0;

    }
