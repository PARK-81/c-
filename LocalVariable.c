#include <stdio.h>

int SFO(void)
    {
        int num=10;
        num++;
        printf("SFO num: %d \n",num);
        return 0;
    }

    int SFT(void)
    {
        int num1=20;
        int num2=30;
        num1++, num2--;
        printf("num1 & num2: %d %d \n",num1, num2);
        return 0;
    }

int main(void)
{
    int num=17;
    SFO();
    SFT();
    printf("main num: %d \n", num);
    return 0;

}
