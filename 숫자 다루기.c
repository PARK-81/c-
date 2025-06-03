#include <stdio.h>
int main()
{
    char a[1000000];
    int i=0,n=0,k=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    i--;
    while(k<1)
    {
        if(a[i]==48)
        {
            i--;
        }
        else
        {
           k++;
        }
    }
    while(i>-1)
    {
        printf("%c",a[i]);
        i--;
    }

    i=0;
    while(a[i]!='\0')
    {
        n=n+a[i]-48;
        i++;
    }
    printf("\n%d",n);
return 0;
}
