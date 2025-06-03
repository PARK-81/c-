#include <stdio.h>
void F(int n,int a)
{
    if(n==0)
    {
        printf("%d",a);
        return;
    }
    a=a*n;
    F(n-1,a);
}
int main()
{
    int b;
    int c=1;
    scanf("%d",&b);
    F(b,c);
}

