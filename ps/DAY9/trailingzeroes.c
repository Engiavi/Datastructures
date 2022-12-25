#include<stdio.h>
int trailingzeroes(int);

int main()
{
    int n=8;
    printf("%d",trailingzeroes(n));
}

int trailingzeroes(int n){
   if (n == 0) 
        return 0;
 
   
    int count = 0;
 
  
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
   
    }




 //while(j!=0)
    // {
    //     j/=10;
    //     c++;
    // }
    //