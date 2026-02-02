/*Manuratnam M J
reg.no: 25101073*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, op, add, sub, divi, mult,res;
    printf("Enter the operation yo want to perform:\n1.Addition\n2.Substraction\n3.Division\n4.Multiplication");
    scanf("%f",&op);
    printf("Enter digits:");
    scanf("%f %f",&a, &b);
    if(op==1)
    {
        res=a+b;
        printf("Sum of a and b is:%f",res);
    }
    else if(op==2)
    {
        res=a-b;
        printf("difference of a and b is:%f",res);
    }
    else if(op==3)
    {
        res=a/b;
        printf("the quotient of a and b is:%f",res);
    }
    else if(op==4)
    {
        res=a*b;
        printf("the product of a and b is:%f",res);
    }
return 0;
}