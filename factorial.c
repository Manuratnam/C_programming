//finding factorial
#include<stdio.h>
int main()
{
    int i,j,fact=1,num;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;  
    }
    printf("factiorial is :%d",fact);
return 0;
}