// �� ���� �Է��ؼ� �������ں��� ����ϱ�
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
while(k==l)//���ڱ��̰� ������ �������ں��� ����ϱ�
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

