// 두 수를 입력해서 작은숫자부터 출력하기
#include <stdio.h>
#include <string.h>
int main()
{
int i=0,n=0,k=0,l=0,c=0,d=0;
char a[101];
char b[101];
scanf("%s %s",&a,&b);
k=strlen(a);//숫자길이 구하기
l=strlen(b);
if(k>l)
{
    printf("%s",b);
    printf(" ");
    printf("%s",a);
}
if(k<l)
{
    printf("%s",a);
    printf(" ");
    printf("%s",b);
}
}
i=0,n=0;
while(k==l)//숫자길이가 같을때 작은숫자부터 출력하기
{
    if(a[i]>b[n])
    {
    printf("%s",b);
    printf(" ");
    printf("%s",a);
    }
    }
    if(a[i]<b[n])
    {
    printf("%s",a);
    printf(" ");
    printf("%s",b);
}
    }
    if(a[i]<b[n]||a[i]>b[n])
    {
        k++;
    }
i++;
n++;
}
return 0;
}

