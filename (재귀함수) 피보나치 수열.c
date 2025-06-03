#include <stdio.h>
int F(int a)
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
    int b;
    scanf("%d",&b);
    printf("%d",F(b));
}
