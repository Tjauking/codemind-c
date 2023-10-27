#include<stdio.h>
int main()
{
    int x,y,div1;
    scanf("%d%d",&x,&y);
    if(x>=y)
    {
        div1=(x-y)/10;
        if ((x-y)%10>0)
        {
            printf("%d",div1+1);
        }
        else
        {
            printf("%d",div1);
        }
        
    }
    else
    {
        div1=(y-x)/10;
        if ((y-x)%10>0)
        {
            printf("%d",div1+1);
        }
        else
        {
            printf("%d",div1);
        }
        
        
    }
}