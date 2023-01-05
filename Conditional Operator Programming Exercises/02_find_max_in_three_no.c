#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c) ? printf("%d is the maximum no.",a) : (a<b && c<b) ? printf("%d is the maximum no.",b) : printf("%d is the maximum no.",c);
    return 0;
}