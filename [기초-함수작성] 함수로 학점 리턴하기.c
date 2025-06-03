#include <stdio.h>
int n;
char grade(int k)
{
  if(k>=90) return 'A';
  if(k>=80&&k<=90) return 'B';
  if(k>=70&&k<=80) return 'C';
  if(k>=60&&k<=70) return 'D';
  if(k< 60) return 'F';
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
