#include <stdio.h>
void F(int a) //x o
{
    printf("%d",a);
}
int H() // o x
{
    int c;
    scanf("%d",&c);
    return c;
}
int D(int o, int p) // o o
{
    int u=o+p;
    return u;
}
void G() // x x
{
    printf("�� �Լ��� �μ��� ���� ���ϴ� �Լ��Դϴ�.\n");
}
int main()
{
    int k,n;
    G();
    n=H();
    k=H();
	F(D(k,n));
}
