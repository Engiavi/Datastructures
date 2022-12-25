#include<stdio.h>
int numberOfSteps(int);
 

int main()
{
    int v,n=123;
    
    printf("%d",numberOfSteps(n));
}
int c=0;
int numberOfSteps(int num){
   
    if (num==0)
    {
        return 0;
    }
    
   else if(num%2==0)
    {
        
         ++c;
         numberOfSteps(num/2);
    }
    else
    {
        ++c;
         numberOfSteps(num-1);
    }
    return c;
    
}
