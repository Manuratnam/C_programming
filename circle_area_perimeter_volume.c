//Volume and perimeter of circle
/*Manuratnam MJ
 reg.no:25101073*/
#include<stdio.h>
void main()
{
    float r,pi,A,P,V;
    pi=3.14;
    printf("enter radius of circle:");
    scanf("%f",&r);
    A=pi*r*r;
    printf("area of circle is:%f\n",A);
    P=2*pi*r;
    printf("Perimeter of circle is:%f\n",P);
    V=(4.0/3.0)*pi*r*r*r;
    printf("volume of sphere is:%f",V);
}
