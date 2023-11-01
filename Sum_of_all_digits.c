#include<stdio.h>
int main()
{
    int x,y,result;
    result=0;
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        x=x/10;
        result=y+result;
    }
    printf("%d",result);
}