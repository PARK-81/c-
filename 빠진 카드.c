#include <stdio.h>
int main()
{
int i,b,c=0,d=0,e=0;
scanf("%d",&b);
int a[b];
for(i=0;i<b-1;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<b-1;i++)
{
    c=c+a[i];
}
for(i=1;i<b+1;i++)
{
    d=d+i;
}
e=d-c;
printf("%d",e);
return 0;
}
