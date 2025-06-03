#include <stdio.h>
int main()
{
char a[100];
int i=0,b=0;
fgets(a,100,stdin);
while(a[i]!='\0')
{
    i++;
}
while(a[i-b]!=a[0])
{
    b++;
    printf("%c",a[i-b]);
}
return 0;
}
