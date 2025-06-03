#include <stdio.h>
void F(int n)
{
    if(n==0)
    {
        return;
    }
    F(n-1);
    printf(" %d",n);
}
int main()
{
    int b;
    scanf("%d",&b);
    F(b);
}
