//determine acceleration due to gravity
#include<stdio.h>
#define pi 3.14
int main()
{
    float l,g,t;
    printf("Enter length and time period:");
    scanf("%f %f",&l,&t);
    g=(4*(pi*pi)*l)/(t*t);
    printf("Acceleration due to gravity is:%.2f",g);
    return 0;
}