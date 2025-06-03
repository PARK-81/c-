#include <stdio.h>
void F(int a)
{
    if(a<1)
    {
        return;
    }
    F(a/2);
    printf("%d",a%2);
    a=(2*a)+(a%2);
}
int main()
{
    int k;
    scanf("%d",&k);
    if(k==0)
    {
        printf("0");
    }
    F(k);
}
