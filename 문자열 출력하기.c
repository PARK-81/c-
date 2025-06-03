#include <stdio.h>
int main()
{
char a[100];
int i=0,k=0;
scanf("%s",&a);
while(a[i]!='\0')
{
    printf("%c",a[i]);
    i++;
}
return 0;
}

