// calculate length of string without strlen()
#include <stdio.h>
int main()
{
    char str[100],i;
    printf("enter string");
    fgets(str,100,stdin);
    while(str[i] !='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}