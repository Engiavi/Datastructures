#include<stdio.h>
#include<string.h>

void ispalindrome(char a[1000]);
int main()
{
    int m;
    char p;
    printf("Enter a string:-\n");
    char a[1000];
    gets(a);
    ispalindrome(a);
      
}

void ispalindrome(char a[1000])
{
    int l = 0;
    int h = strlen(a) - 1;
    while (h > l)
    {
        if (a[l++] != a[h--])
        {
            printf("%s is not a palindrome\n",a);
            return;
        }
    }
    printf("%s is a palindrome\n", a);
}
    
