#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number of terms = ");
    scanf("%d", &x);
    int a = 1;
    int b = 1;
    int sum = 0;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 1; i <= x - 2; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}