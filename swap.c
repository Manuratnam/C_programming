//wap to swap two variables
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers a,b:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\na:%d \nb:%d",a,b);
    return 0;
}