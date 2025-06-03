#include <stdio.h>
void F(int A,int t)//2진수변환
{
    if(A==0)
    {
        return;
    }
    t=A%2;//나머지 이후에 나누기
    F(A/2,t);
    printf("%d",t);
}
void G(int B,int i)//8진수변환
{
    if(B==0)
    {
        return;
    }
    i=B%8;
    G(B/8,i);
    printf("%d",i);
}
void H(int C,int o)//16진수변환
{
    if(C==0)
    {
        return;
    }
    o=C%16;
    H(C/16,o);
    if(o==10)
    {
        printf("A");
    }
    if(o==11)
    {
        printf("B");
    }
    if(o==12)
    {
        printf("C");
    }
    if(o==13)
    {
        printf("D");
    }
    if(o==14)
    {
        printf("E");
    }
    if(o==15)
    {
        printf("F");
    }
    if(o<10)
    {
        printf("%d",o);
    }
}
int main()
{
    int n,a,b,c,y=0,u=0,l=0;
    scanf("%d",&n);
    a=n;
    b=n;
    c=n;
    printf("2 ");
    F(a,y);
    printf("\n8 ");
    G(b,u);
    printf("\n16 ");
    H(c,l);
}
