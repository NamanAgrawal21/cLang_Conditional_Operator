#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    (year%4==0 && year%100!=0) || year%400==0 ? printf("%d is the leap year.",year) : printf("%d is not a leap year.",year);
    return 0;
}