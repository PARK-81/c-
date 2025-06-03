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
while(a[b]!=a[i])
{
    printf("%c",a[b]);
    b++;
}
return 0;
}
