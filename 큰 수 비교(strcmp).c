//strcmp(a,b)는 두 수의 길이가 같을때 a-b를 구하는 식 크면 + 작으면 - 같으면 0
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
if(k>l)//두 수의 길이가 다를때 비교
{
    printf("%s",b);
    printf(" ");
    printf("%s",a);
}
if(k<l)//두 수의 길이가 다를때 비교
{
    printf("%s",a);
    printf(" ");
    printf("%s",b);
}
while(k==l)//두 수의 길이가 같을때 비교
{
  if(strcmp(a,b)>0)
{
    printf("%s",b);
    printf(" ");
    printf("%s",a);
}
if(strcmp(a,b)<0)
{
    printf("%s",a);
    printf(" ");
    printf("%s",b);
}
if(strcmp(a,b)<0||strcmp(a,b)>0)
    {
        k++;
    }
}
return 0;
}
