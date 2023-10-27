#include<stdio.h>
int main()
{
    int a,b,x,y;
    float ovo,obo;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    ovo=(a/(x*1.0));
    obo=(b/(y*1.0));
    if (ovo>obo or y==0 )
    {
        printf("Jesse");
        
    }
    if (ovo<obo or x==0)
    {
        printf("Walter");
    }
    if (ovo==obo)
    {
        printf("Both");
    }
}