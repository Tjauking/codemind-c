#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    while(y<=z)
    {
        printf("%d x %d = %d
",x,y,x*y);
        y=y+1;
        
    }
}