#include<stdio.h>
int main()
{
    int x,sum;
    scanf("%d",&x);
    sum=0;
    for(x;x>=0;x=x-1)
    {
        sum=sum+x;
    }
    printf("%d",sum);
}