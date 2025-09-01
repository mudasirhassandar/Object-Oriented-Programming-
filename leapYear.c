#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Year = ");
    scanf("%d", &x);
    if (x % 4 == 0 || x % 400 == 0)
        printf("%d year is leap year", x);
    else
        printf("%d is not leap year", x);
    return 0;
}