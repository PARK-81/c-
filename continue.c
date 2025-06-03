#include <stdio.h>
#include <string.h>
int main()
{
    int a=1,b=1,c=0;
    while(a==b)
    {
        printf(" hi ");
        c++;
        if(c==a)
        {
            continue;
        }
        printf(" cc ");
        b++;
    }
return 0;
}
