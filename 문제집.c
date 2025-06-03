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
    printf("이 함수는 두수의 합을 구하는 함수입니다.\n");
}
int main()
{
    int k,n;
    G();
    n=H();
    k=H();
	F(D(k,n));
}
