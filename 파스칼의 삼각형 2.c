#include <stdio.h>
int F(int c,int d)
{
    if(c==1||d==1)
    {
        return 1;
    }
    return F(c-1,d)+F(c,d-1);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",F(a,b)%100000000);
}
