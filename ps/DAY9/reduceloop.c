#include<stdio.h>
int numberOfSteps(int);
 

int main()
{
    int v,n=123;
    
    printf("%d",numberOfSteps(n));
}

int numberOfSteps(int num)
{
    int c=0;
    for(c=0;num>0;c++)
    {
        if(num%2==0)
        {
            num/=2;
        }
        else{
            num-=1;
        }
    }
    return c;

}