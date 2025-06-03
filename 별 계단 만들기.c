#include <stdio.h>
int main()
{
int a;
int b;
int c;
int d=1;

scanf("%d",&a);
for(b=1;b<a+1;b=b+1)
{
    for(c=1;c<d;c=c+1)
    {
        printf(" ");
    }
    printf("**");
    printf("\n");
    d=d+1;
}
return 0;
}
