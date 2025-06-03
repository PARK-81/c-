#include <stdio.h>
void F(int n,int t)
{
    if(n==0)
    {
        return;
    }
    t=n%2;
    F(n/2,t);
    printf("%d",t);
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=0;
    if(b==0)
    {
        printf("%d",0);
        return 0;
    }
    F(b,a);
}
