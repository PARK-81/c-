#include <stdio.h>
int n;
char f(int a)
{
int b=0,c=0;
    while(2+b<a)
    {
        if(a%(2+b)==0)
        {
            c++;
            break;
        }
    b++;
    }
    if(c==0)
    {
        printf("prime");
    }
    if(c>0&&a!=2)
    {
        printf("composite");
    }
}
int main()
{
scanf("%d", &n);
  f(n);
  return 0;
}



