#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    printf("entered number = %d", x);
    printf("\n");
    printf("Sum of digts = ");
    int sum = 0;
    for (int i = 1; x > 0; i++)
    {
        int ld = x % 10;
        sum = sum + ld;
        x = x / 10;
    }
    printf("%d", sum);
    return 0;
}