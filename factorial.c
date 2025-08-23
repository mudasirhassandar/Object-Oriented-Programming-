#include <stdio.h>
int fac(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }

    return x * fac(x - 1);
}
int main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    printf("Factorial of %d is: ", x);
    if (x != 1 && x != 0)
    {
        for (int i = x; i >= 1; i--)
        {
            printf("%d ", i);
            if (i > 1)
                printf("* ");
        }
    }
    int factorial = fac(x);
    printf("= %d", factorial);

    return 0;
}