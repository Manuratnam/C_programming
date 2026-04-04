#include <stdio.h>
int main()
{
  int arr[10],i,n,max;
  printf("enter number of elements:\n");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  max=arr[0];
  for(i=0;i<n;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
  }
  printf("Largest number is:%d",max);
return 0;
}