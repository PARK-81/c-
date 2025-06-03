#include <stdio.h>
void F(int a,int c)
{
    if(a==0)
    {
        return;
    }
    S(c);
    c++;
    F(a-1,c);
}

void S(int n)
{
    if(n==0)
    {
        printf("\n");
        return;
    }
    printf("*");
    S(n-1);
}

int main()
{
int b;
scanf("%d",&b);
int k=1;
F(b,k);
}
