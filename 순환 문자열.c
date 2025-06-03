int main()
{
char a[21];
char b[21];
char c[21];
int i=0,n=0,k=0;;
scanf("%s",&a[i]);
scanf("%s",&b[n]);
scanf("%s",&c[k]);

while(a[i]!='\0')
{
    i++;
}
while(b[n]!='\0')
{
    n++;
}
while(c[k]!='\0')
{
    k++;
}
if(a[i-1]==b[0]&&b[n-1]==c[0]&&a[0]==c[k-1])
{
    printf("good");
}
else
{
   printf("bad");
}
return 0;
}
