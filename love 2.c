#include <stdio.h>
int main()
{
char a[102];
int i=0,b=0,n=0;
fgets(a,102,stdin);
while(a[i]!=10)
{
    if(a[i]==108&&a[i+1]==111&&a[i+2]==118&&a[i+3]==101)
    {
        b++;
    }
i++;
}
printf("%d",b);
return 0;
}
