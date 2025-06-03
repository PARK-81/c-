#include <stdio.h>
int n;
 char f(int a)
{
    if(a==1)
    {
        printf("hello");
    }
    if(a==2)
    {
        printf("world");
    }
}
int main()
{
scanf("%d", &n);
  f(n);
  return 0;
}
