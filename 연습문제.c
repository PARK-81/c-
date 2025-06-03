#include <stdio.h>
int main()
{
    int a;
    int b;


    printf("입력하세요.");
    scanf("%d",&a);
    scanf("%d",&b);



    if(a==3||a==4||a==5)
    {
      a=1;
    }
    if(b==3||b==4||b==5)
    {
      b=1;
    }
    if(a==6||a==7||a==8)
    {
      a=2;
    }
    if(b==6||b==7||b==8)
    {
       b=2;
    }
    if(a==9||a==10||a==11)
    {
       a=3;
    }
    if(b==9||b==10||b==11)
    {
       b=3;
    }
    if(a==12||a==1||a==2)
    {
        a=4;
    }
    if(b==12||b==1||b==2)
    {
        b=4;
    }
    if(a==b)
    {
        printf("두 사람의 태어난 계절은 같습니다.");
    }
    if(a!=b)
    {
        printf("두 사람의 태어난 계절은 다릅니다.");
    }
         return 0;

}







