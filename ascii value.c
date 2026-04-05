//print ascii value of your name
#include<stdio.h>
int main()
{
    char name[50];
    int i = 0;
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    while(name[i] != '\0')
    {
        printf("%c = %d\n", name[i], name[i]);
        i++;
    }
    return 0;
}