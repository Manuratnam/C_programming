//celcius to fahrenheit
#include<stdio.h>
int main()
{
    float f,c;
    printf("enter celcius:");
    scanf("%f",&c);
    f=((c/5)*9)+32;
    printf("Temperature in fahrenheit:%f",f);
    return 0;
}