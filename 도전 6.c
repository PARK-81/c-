#include <stdio.h>
int F(int a)
{
    int h=0,m=0,s=0;
    while(a-3600>=0)
    {
        a=a-3600;
        h++;
    }
    while(a-60>=0)
    {
        a=a-60;
        m++;
    }
    while(a-1>=0)
    {
        a=a-1;
        s++;
    }
    printf("[h=%d, m=%d, s=%d]",h,m,s);
}
int main()
{
    int k;
    printf("รส(second)ภิทย: ");
    scanf("%d",&k);
    F(k);
}

