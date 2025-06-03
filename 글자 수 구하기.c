#include <stdio.h>
#include <string.h>
int main()
{
char a[100]="asdfgasda";
//fgets(a,100,stdin);
a[4]='\0';
printf("%d",strlen(a));
return 0;
}

