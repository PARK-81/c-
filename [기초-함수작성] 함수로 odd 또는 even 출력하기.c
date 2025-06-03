#include <stdio.h>
int n;
 char f(int a)
{
    if(a%2==1)
    {
        printf("odd");
    }
    if(a%2==0)
    {
        printf("even");
    }
}
int main()
{
scanf("%d", &n);
  f(n);
  return 0;
}
