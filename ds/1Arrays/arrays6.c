//element repeated analysis
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements\n"); scanf("%d",&n);

    int a[n],i,b[100],j,c;

    for(i=0;i<n;i++)

    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
     {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1; 
                }

            }

            b[i]=c; 
        }

    }

    printf("Non repeating elements are\n");

    for(i=0;i<n;i++){

    if(a[i]!=-1){

    if(b[i]==1)

    printf("%d\n",a[i]);	}

    }

    printf("Repeating elements are\n");

    for(i=0;i<n;i++){

    if(a[i]!=-1){

    if(b[i]>1)

    printf("%d\n",a[i]); }

    }

    return 0;
}
        
