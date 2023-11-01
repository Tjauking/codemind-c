#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}