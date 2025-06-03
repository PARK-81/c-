#include <stdio.h>
int main()
{
int i,b,c;
scanf("%d",&b);
int a[b];
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
}
for(c=0;c<2;c++)
{
   for(i=0;i<b;i++)
   {
       printf("%d\n",a[i]);
   }
}
return 0;
}
