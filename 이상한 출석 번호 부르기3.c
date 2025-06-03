#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
int i,l,k,j,a[t];
for(i=0;i<t;i++)
{
    scanf("%d",&a[i]);

}
for(j=0;j<t;j++)
{
    for(l=0;l<t-1;l++)
    {
        if(a[l]>a[l+1])
        {
            k=a[l+1];
            a[l+1]=a[l];
            a[l]=k;
        }
    }
l=0;

}
printf("%d",a[0]);
return 0;
}
