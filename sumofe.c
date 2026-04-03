#include<stdio.h>
int main() {
    int a[100][100],b[100][100],c[100][100],m,n,p,q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);  
    printf("Enter elements of first matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m!=p || n!=q)
    {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        return 1;
    }
    else
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }    }
    printf("Sum of the two matrices: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)        
        {
            printf("%d ",c[i][j]);      
        }
        printf("\n");
    }
    return 0;
}