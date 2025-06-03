#include <stdio.h>
int main()
{
int l,i,a[5][5];
int j=0,k=0,n=0,m=0,p=0;
 for(l=0;l<5;l++)
{
    for(i=0;i<5;i  ++)
    {
    scanf("%d",&a[l][i]);
    }
}
for(l=0;l<5;l++)
{
    for(i=0;i<5;i++)
    {
        if(l-1>0)
        {
            k=a[l-1][i];
        }
        if(l+1<5)
        {
            j=a[l+1][i];
        }
        if(i-1>=0)
        {
            n=a[l][i-1];
        }
        if(i+1<5)
        {
            m=a[l][i+1];
        }
        p=j+k+n+m;
        printf("%d ",p);
        p=0;
        j=0;
        k=0;
        n=0;
        m=0;
    }
printf("\n");
}
return 0;
}
