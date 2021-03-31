#include <stdio.h>

int main()
{
 int num1;
 int num2, res;
 char x;
 scanf("%d%c%d",&num1,&x,&num2);

 if(x == '+')
 {
  res = num1 + num2;
 }

 else if(x == '-')
 { 
  res = num1 - num2;
 }

 else if(x == '*')
 {
  res = num1 * num2;
 }
 
 else if(x == '/')
 {
  res = num1 / num2;
 }

 printf("%d",res);

 return 0;
}
