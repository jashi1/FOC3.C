#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n,s,term;
  printf("Enter the value of n:");
  scanf("%d",&n);
  s=0;
  for(i=1;i<=n;i++)
  {
  term=0;
  for(j=1;j<=i;j++)
  {
  term=term+j;
}
  s=s+term;
}
    printf("sum of the series s=%d.",s);
getch();
}
