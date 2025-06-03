#include <stdio.h>
void F(int a, int b)
{
    for(a=a;a<b+1;a++)
    {
    for(int i=1;i<11;i++)
        {
            int g;
            g=i*a;
            printf("%dx%d=%d \n",a,i,g);
        }
    }
}
void G(int c, int d)
{
    for(d=d;d<c+1;d++)
    {
    for(int m=1;m<11;m++)
        {
            int p;
            p=m*d;
            printf("%dx%d=%d \n",d,m,p);
        }
    }
}
int main()
{
    int k,n;
    scanf("%d %d",&k,&n);
    if(k<n)
    {
        F(k,n);
    }
    else
    {
        G(k,n);
    }

}
