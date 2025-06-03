#include <stdio.h>
int F(int a)
{
    if(a<2)
    {
        return 1;
    }
    F(a-1);
    return a*F(a-1);
}
int main()
{
    int k=5;
    printf("%d",F(k));
}
