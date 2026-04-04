//sum and product of array
#include<stdio.h>
int main()
{
    int arr[5], i, sum = 0,prod=1;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        prod=prod*arr[i];
    }
    printf("Sum = %d", sum);
    printf("\nproduct = %d",prod);
    return 0;
}