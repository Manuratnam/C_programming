#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%s",(a%2==0)?"even":"odd");
    return 0;
}