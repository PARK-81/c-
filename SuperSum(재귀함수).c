#include <stdio.h>
int SuperSum(int a,int b)
{
    int i;
    if(a==0)
    {
        return b;
    }
    for(i=1;i==a;i++)
    {
        return SuperSum(a-1,i);
    }
}

int main()
{
    int k,n;
    while( scanf("%d %d", &k, &n) != EOF )
	printf("%d\n", SuperSum(k, n));
}


