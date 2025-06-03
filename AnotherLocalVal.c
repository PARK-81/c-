#include <stdio.h>

int main(void)
{
    int cut;
    for(cut=0;cut<3;cut++)
    {
        int num=0;
        num++;
        printf("%d번째반복, 지역변수 num은 %d. \n",cut+1, num);
    }

    if(cut==3)
    {
        int num=7;
        num++;
        printf("if문 내에 존재하는 지역변수 num은 %d. \n",num);
    }
    return 0;
}
