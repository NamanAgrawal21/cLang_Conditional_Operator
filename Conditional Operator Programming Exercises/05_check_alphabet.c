#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the single character:");
    scanf("%c",&ch);
    ( ch>=65 && ch<=90 ) || ( ch>=97 && ch<=122 ) ? printf("%c is an alphabet",ch) : printf("%c is not an alphabet",ch);
}