#include<stdio.h>
int stringlen(char a[1000]);
int main()
{
    int m;
    printf("Enter a string:-\n");
    char a[1000];
    gets(a);
    m=stringlen(a);
   printf("%d",m);
    
}
int stringlen( char a[1000])
{
    int c=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    return(c);
}