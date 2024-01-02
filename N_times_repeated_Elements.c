#include<stdio.h>
int main()
{
    int a,count=0,sig=1;
    scanf("%d",&a);
    int arry[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arry[i]);
    }
    int num;
    scanf("%d",&num);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(arry[i]==arry[j])
            {
                count++;
            }
        }
        if(count==num)
        {
            printf("%d ",arry[i]);
            arry[i]=-1;
            sig=0;
        }
        count=0;
    }
    if(sig)
    {
        printf("-1");
    }
}