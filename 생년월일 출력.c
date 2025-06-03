#include <stdio.h>
int main()
{
char a[100];
int i=0,k=0;
scanf("%s",&a[i]);
if(a[7]=='1'||a[7]=='2')
    {
        printf("19%c%c/",a[0],a[1]);
    }
if(a[7]=='3'||a[7]=='4')
    {
        printf("20%c%c/",a[0],a[1]);
    }
printf("%c%c/",a[2],a[3]);
printf("%c%c ",a[4],a[5]);
if(a[7]=='1'||a[7]=='3')
    {
        printf("M");
    }
if(a[7]=='2'||a[7]=='4')
    {
        printf("F");
    }
return 0;
}
