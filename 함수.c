#include <stdio.h>
float F(float a,float b,int c)
{
    float d;
    if(c==1)
    {
        d=a+b;
    }
    if(c==2)
    {
        d=a-b;
    }
    if(c==3)
    {
        d=a*b;
    }
    if(c==4)
    {
        d=a/b;
    }
    return d;
}
int main()
{
    int k,l,j;
    scanf("%d %d %d",&k,&l,&j);
    printf("%.2f",F(k,l,j));

    return 0;
}

