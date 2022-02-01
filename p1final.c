#include <stdio.h>
void add()
{
  int a,b,c;
  printf("Enter two numbers\n");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("sum of %d+%d =%d\n",a,b,c);
}
int main()
{
  add();
  return 0;
}