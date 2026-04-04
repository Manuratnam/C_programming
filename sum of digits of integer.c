//sum of integer
#include<stdio.h>
int main()
{
  int num,sum=0,i;
  printf("enter number:");
  scanf("%d",&num);
  while(num!=0)
  {
    i=num%10;
    num=num/10;
    sum=sum+i;
  }
  printf("sum is:%d",sum);
  return 0;
}