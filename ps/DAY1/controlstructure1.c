#include<stdio.h>
#include<math.h>
void main()
{
    float hra,pf,da,ts;
    int allow,bs,q;
    char gr;
    printf("enter bs and gr");
    scanf("%d %c",&bs,&gr);
    if(gr=='A')
    allow=1700;
    else if(gr=='B')
    allow=1500;
    else
    allow=1300;

    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    ts=bs+hra+da+allow-pf;
    q=round(ts);
    printf("%d",q);
}