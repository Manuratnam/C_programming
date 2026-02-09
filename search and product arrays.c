#include<stdio.h>
int main()
{
    int a[100], n, i,sum=0,P=1,search,count=0;
    printf("Enter the limit of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        P*=a[i];
    }
    printf("elements in arrays are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("sum of elements are:%d\n",sum);
    printf("Product of elements are:%d\n",P);
    printf("Search for an element:");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(search==a[i])
        {
            printf("element found at %d\n",i+1);
            count=count+1;
        }
    }
    printf("element found %d times",count);
}



