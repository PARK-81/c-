#include <stdio.h>
int main()
{
int a;
int b;
int c;
scanf("%d %d",&a,&b);
for(a=a;a<b+1;a=a+1)
{
    for(c=1;c<10;c=c+1)
    {
       printf("%d*%d=%d",a,c,a*c);
       printf("\n");
    }

}
return 0;
}

