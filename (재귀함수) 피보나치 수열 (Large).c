#include <stdio.h>
long long int F(long long int a)
{
    if(a==1)
    {
        return 1;
    }
    if(a==2)
    {
        return 1;
    }
    return F(a-1)+F(a-2);
}
int main()
{
    int k;
    scanf("%d",&k);
    printf("%lld",F(k)%10009);
}
