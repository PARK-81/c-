#include <stdio.h>
int F(int a, int b)
{
    int m=0;
    int f[9];
    if(b==9)
    {
        return 0;
    }
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            m=1;
        }
    }
    if(m==0)
    {
        printf("%d ",a);
        b++;
    }
    F(a+1,b);
}
int main()
{
    int k=3,n=0;
    printf("2 ");
    F(k,n);
}

