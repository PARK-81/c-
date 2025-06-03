#include <stdio.h>
int main()
{
int a[10],i,b,c;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
scanf("%d",&b);
printf("%d",a[b-1]);
return 0;
}
