#include <stdio.h>
int main()
{
int a[100];
int n,k=0;
scanf("%d",&n);
for(n=n;n!=0;k++)
{
    a[k]=n%2;
    n=n/2;
}
while(k-1!=-1)
{
    printf("%d",a[k-1]);
    k=k-1;
}
return 0;
}
