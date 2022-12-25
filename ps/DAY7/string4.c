#include<stdio.h>

int main()
{
    char a[1000];
    int i,count=0;
    printf("Enter paragraph:-\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        count++;
    }
    printf("Total words in paragraph are:-%d",count+1);
    return 0;
}