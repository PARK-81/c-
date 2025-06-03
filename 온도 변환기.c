#include <stdio.h>
float F(float a,float b)
{
    float c;
    if(b==1)
    {
        c=(a-32)*5/9;
    }
    if(b==2)
    {
        c=(a*9/5)+32;
    }
    return c;
}
int main()
{
    int k,l;
    scanf("%d %d",&k,&l);
    printf("%.2f",F(k,l));

    return 0;
}
