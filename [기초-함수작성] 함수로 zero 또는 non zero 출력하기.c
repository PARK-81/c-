#include <stdio.h>
int n;
     char f(int a)
    {
        if(a==0)
        {
            printf("zero");
        }
        else
        {
            printf("non zero");
        }
    }
int main()
{
scanf("%d", &n);
  f(n);
  return 0;
}

