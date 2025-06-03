#include <stdio.h>
void F(int n)
{
    if(n==0)
    {
        return;
    }
    printf(" %d",n);
    F(n-1);
}
int main()
{
    int b;
    scanf("%d",&b);
    F(b);
}
