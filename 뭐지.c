#include <stdio.h>
int n;
char f(int a)
{
    if(a==0)
    {
        printf("zero");
    }
    if(a*-1>0)
    {
        printf("negative");
    }
    if(a*-1<0)
    {
        printf("positive");
    }
}
int main()
{
scanf("%d", &n);
  f(n);
  return 0;
}


