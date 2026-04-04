//read and print array using while
#include<stdio.h>
int main()
{
    int arr[5],i=0;
    printf("Enter 5 elements:\n");
    while(i<5)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    printf("Elements are:");
    while(i<5)
    {
        printf("\t%d",arr[i]);
        i++;
    }
    return 0;
}