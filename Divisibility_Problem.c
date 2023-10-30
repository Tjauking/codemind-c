#include<stdio.h>
int main()
{
    int x,y,num,dic,remain;
    scanf("%d%d",&x,&y);
    dic=x/y;
    remain=x%y;
    if (remain>0)
    {
        num=(dic+1)*y;
        printf("%d",num-x);
    }
    else
    {
        num=(dic*y);
        printf("%d",num-x);
    }
}