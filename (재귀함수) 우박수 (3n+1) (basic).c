#include <stdio.h>
void F(int a)
{
    if(a==1)
    {
        return;
    }
    if(a%2==1)
    {
        a=a*3+1;
    }
    else
    {
        a=a/2;
    }
    F(a);
    printf("%d\n",a);
}
int main()
{
    int b;
    scanf("%d",&b);
    F(b);
    printf("%d\n",b);
}
