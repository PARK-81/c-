#include <stdio.h>
int main()
{
char a[100];
int i=0,k=1;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
    if(a[i]==116)
    {
        printf("%d ",k);
    }

k++;
i++;
}
return 0;
}
