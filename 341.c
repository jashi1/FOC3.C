#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  char op;
  printf("calculater program");  
  printf("\n+add\n-sub\n*mul\n/div");
  printf("enter a operater symbol");
  scanf("%c",&op);
  printf("enter a,b values");
  scanf("%d%d",&a,&b);
  switch(op)
{
    case '+':
    c=a+b;
    break;
    case '-': 
	c=a-b;
	break;
    case '*': 
    c=a*b;
     break;
    case '/':
     c=a/b;
    break;
}
 printf("the result is %d",c);
getch();
}
