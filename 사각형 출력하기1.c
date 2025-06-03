#include <stdio.h>
int main()
{
int a;
int b;
int c;
scanf("%d",&a);
for(c=1;c<a+1;c=c+1)
{
    for(b=1;b<a+1;b=b+1)
    {
        printf("*");
    }
printf("\n");
}
    return 0;
}
