#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, y;
    printf("Enter a number n: ");
    scanf("%d", &n);

    int limit = sqrt(n);

    printf("Pairs (x, y) such that x^2 + y^2 = %d are:\n", n);

    for (x = 0; x <= limit; x++)
    {
        for (y = 0; y <= limit; y++)
        {
            int sum = x * x + y * y;

            if (sum == n)
            {
                printf("(%d, %d)\n", x, y);
                continue; // no need to check more conditions, go to next y
            }
            else if (sum > n)
            {
                break; // further increasing y will only increase sum
            }
        }
    }

    return 0;
}
