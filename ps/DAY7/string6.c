#include<stdio.h>
int main()
{
    int i,k=0;
    char a[1000],b[1000];
    printf("It is the program of compare two string\n");
    printf("Enter two string\n");
    gets(a);
    gets(b);
    for(i=0;a[i]!=0 && b[i]!=0;i++)
    {
        if(a[i]!=b[i])
        {
            k=1;
            break;
        }
    }
    if(k==0)
    printf("Both strings are equal");
    else
    printf("Not equal");
}