int main()
{
int t;
scanf("%d",&t);
int i,l,k,j,a[t];
for(i=0;i<t;i++)
{
    scanf("%d",&a[i]);
}
for(l=0;l<t;l++)
{
    {
    k=a[0];
    a[0]=a[t];
    a[t]=k;
    }
for(j=0;j<t;j++)
    {
        printf(" %d ",a[j]);
    }
printf("\n");
}
return 0;
}
