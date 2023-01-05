#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    n%2==0 ? printf("%d is the even no.",n) : printf("%d is the odd no.",n);
}