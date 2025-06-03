#include <stdio.h>
int main()
{
char a[100];
float i=0,k=0,n=0;
scanf("%s",&a);
i=a[3]-48;
k=a[0]-48;
n=-i/k;
 printf("%.2f",n);
return 0;
}
