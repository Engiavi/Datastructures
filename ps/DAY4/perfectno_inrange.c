#include <stdio.h>

int checkPerfect(int n1);
void PerfectNumbers(int low, int enLimit);

int main()
{
    int low, high;
	    
    printf(" Input lowest search limit of perfect numbers : ");
    scanf("%d", &low);
    printf(" Input highest search limit of  perfect numbers : ");
    scanf("%d", &high);
     
    printf("\n The perfect numbers between %d to %d are : \n", low, high);
    PerfectNumbers(low, high);
    printf("\n"); 
    return 0;
}


int checkPerfect(int n1)
{
    int i, sum;
     
    sum = 0;
    for(i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            sum += i;
        }
    }

    if(sum == n1)
        return 1;
    else
        return 0;
}

void PerfectNumbers(int low, int high)
{
 
    while(low <= high)
    {
        if(checkPerfect(low))
        {
            printf(" %d  ", low);
        }
        low++;
    }   
}
