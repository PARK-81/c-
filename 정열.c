#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int b,c,d=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(b=0;b<10;b++)
    {
        for(i=0;i+b<10;i++)
        {
            if(a[b]>a[i+b])
            {
                c=a[b];
                a[b]=a[b+i];
                a[b+i]=c;
                d=1;
            }
        }
        if(d==1)
        {
           for(i=0;i<10;i++)
           {
           printf(" %d ",a[i]);
           }
        }
        printf("\n");
        d=0;
    }
return 0;
}
