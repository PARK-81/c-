#include <stdio.h>
int main()
{
char a[20];
int i;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
 a[i]=a[i]+2;
 printf("%c",a[i]);
 i++;
}
printf("\n");
i=0;
while(a[i]!='\0')
{
 a[i]=a[i]-2;
 a[i]=(a[i]*7)%80+48;
 printf("%c",a[i]);
 i++;
}
return 0;
}
