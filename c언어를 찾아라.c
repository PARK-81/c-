#include <stdio.h>
int main()
{
char a[100];
int i=0,k=0,n=0;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
 if(a[i]==67||a[i]==99)
    {
        k=k+1;
    }
i++;
}
printf("%d\n",k);
i=0;
while(a[i+1]!='\0')
{
 if(a[i]+a[i+1]==166||a[i]+a[i+1]==198||a[i]+a[i+1]==134)
    {
        n=n+1;
    }
i++;
}
printf("%d",n);
return 0;
}
