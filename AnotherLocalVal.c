#include <stdio.h>

int main(void)
{
    int cut;
    for(cut=0;cut<3;cut++)
    {
        int num=0;
        num++;
        printf("%d��°�ݺ�, �������� num�� %d. \n",cut+1, num);
    }

    if(cut==3)
    {
        int num=7;
        num++;
        printf("if�� ���� �����ϴ� �������� num�� %d. \n",num);
    }
    return 0;
}
