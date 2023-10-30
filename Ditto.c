#include<stdio.h>
int main()
{
    int x,y,p,remain,mid,left,right;
    scanf("%d%d%d",&x,&y,&p);
    
    if (y>x)
    {
        mid=(y-x);
        if (mid%(2*p)==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if (y<x)
    {
        mid=(x-y);
        if (mid%(2*p)==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        
    }
    else
    {
        printf("YES");
    }
}