#include <stdio.h>
void S() // x x
{
    printf("�� ���α׷��� �� ���� ���� ���ϱ����� ���α׷� �Դϴ�.");
}
int F() //o x
{
    int a;
    scanf("%d",&a);
    return a;
}
Add(int a,int b) //o o
{
    int c;
    c=a+b;
    return c;
}
void P(int c) // x o
{
    printf("%d",c);
}
int main()
{
    int n,k,m;
    S();
    n=F();
    k=F();
    m=Add(n,k);
    P(m);

}
