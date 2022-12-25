#include<stdio.h>
int main()
{
    int i;
    char a[1000];
    printf("Enter Text:-\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
             printf("%c",a[i]);
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
             printf("%c",a[i]);
        }
        else
        printf("Doesn\'t recognize as uppercase or lowercase");
    }
}