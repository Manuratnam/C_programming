#include<stdio.h>
int main()
{
    int a[100], n, i,sum=0;
    printf("Enter the limit of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("elements in arrays are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("sum of elements are:%d",sum);
}