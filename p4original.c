#include<stdio.h>
int input()
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  return n;
}
int aray(int n,int a[10])
{
  int i;
  for(i=0;i<n;i++)
  { 
    printf("enter array number\n");
    scanf("%d",&a[i]);
  }
}
int add(int n,int a[10])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
  sum=sum+a[i];
}
return sum;
}
int output(int sum)
{
  printf("sum is %d",sum);
}
int main()
{
  int n,a[10],sum,i;
  n=input();
  aray(n,a);
  sum=add(n,a);
  output(sum);
  return 0;
}