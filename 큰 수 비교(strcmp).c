//strcmp(a,b)�� �� ���� ���̰� ������ a-b�� ���ϴ� �� ũ�� + ������ - ������ 0
#include <stdio.h>
#include <string.h>
int main()
{
int i=0,n=0,k=0,l=0,c=0,d=0;
char a[101];
char b[101];
scanf("%s %s",&a,&b);
k=strlen(a);//���ڱ��� ���ϱ�
l=strlen(b);
if(k>l)//�� ���� ���̰� �ٸ��� ��
{
    printf("%s",b);
    printf(" ");
    printf("%s",a);
}
if(k<l)//�� ���� ���̰� �ٸ��� ��
{
    printf("%s",a);
    printf(" ");
    printf("%s",b);
}
while(k==l)//�� ���� ���̰� ������ ��
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
