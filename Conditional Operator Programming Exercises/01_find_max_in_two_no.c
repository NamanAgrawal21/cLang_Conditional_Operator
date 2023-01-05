#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    a>b ? printf("%d is the maximum no",a) : printf("%d is the maximum no",b);
    return 0;
}