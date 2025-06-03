#include <stdio.h>
int main()
{
int a[10],i,b;
scanf("%d",&b);
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
}
   for(i=1;b-i>=0;i++)
   {
     printf("%d ",a[b-i]);
   }
return 0;
}

