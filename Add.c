#include <stdio.h>
int Add(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int k,l;
    scanf("%d %d",&k,&l);
    printf("%d",Add(k,l));

    return 0;
}

