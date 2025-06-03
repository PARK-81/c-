#include <stdio.h>
int F(int a, int b, int c)
{
    if(a%c==0 && b%c==0)
    {
        printf("두 수의 최대공약수: %d",c);
        return 0;
    }
F(a,b,c=c-1);
}
int main()
{
    int k,n,i;
    printf("두 개의 정수 입력: ");
    scanf("%d %d",&k,&n);
    i=k;
    F(k,n,i);
}
