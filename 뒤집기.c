#include <stdio.h>
int main()
{
    int a[5][5],k=1,l,i,p,n=0,m=1;
    scanf("%d",&p);
    if(p==1||p%4==1)
 {
        for(l=0;l<5;l++)
  {
      for(i=0;i<5;i++)
      {
         a[l][i]=k;
         k++;
      }
  }
for(l=0;l<5;l++)
  {
      for(i=0;i<5;i++)
      {
         printf("%4d ",a[l][i]);
      }
    printf("\n");
  }
 }
 if(p==2||p%4==2)
 {
        for(i=4;i>=0;i=i-1)
  {
      for(l=0;l<5;l++)
      {
         a[l][i]=k;
         k++;
      }
  }
for(l=0;l<5;l++)
  {
      for(i=0;i<5;i++)
      {
         printf("%4d ",a[l][i]);
      }
    printf("\n");
  }
 }
 if(p==3||p%4==3)
 {
        for(l=4;l>=0;l=l-1)
  {
      for(i=4;i>=0;i=i-1)
      {
         a[l][i]=k;
         k++;
      }
  }
for(l=0;l<5;l++)
  {
      for(i=0;i<5;i++)
      {
         printf("%4d ",a[l][i]);
      }
    printf("\n");
  }
 }
 if(p==4||p%4==0)
 {
        for(l=4;l>=0;l=l-1)
  {
      for(i=0;i<5;i++)
      {
         a[l][i]=k;
         k=k+5;
      }
      m=m+1;
      k=m;
  }
for(l=0;l<5;l++)
  {
      for(i=0;i<5;i++)
      {
         printf("%4d ",a[l][i]);
      }
    printf("\n");
  }
 }
 return 0;
}


