//search,sum and product of array
#include<stdio.h>
int main()
{
    int arr[5], i, sum = 0,prod=1, key, found;
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
    printf("enter an element to search:");
    scanf("%d",&key);
    for (i=0;i<5;i++)
    {
        if (arr[i]==key)
        {
           found=1;
           break; 
        }
        
    }
    if (found==1)
    {printf("found\n");}
    else
    {printf("Not found\n");}
    printf("Sum = %d", sum);
    printf("\nproduct = %d",prod);
    
    return 0;
}