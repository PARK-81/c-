#include <stdio.h>
int main()
{
char a[1000];
int i=0;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if(a[i]>=65&&a[i]<=90)
{
    a[i]=a[i]+32;
}
else if(a[i]>=97&&a[i]<=122)
{
    a[i]=a[i]-32;
}
printf("%c",a[i]);
i++;
}
return 0;
}
