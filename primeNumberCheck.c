#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    if (x == 1)
        printf("Nither prime Nor composite");
    else
    {
        for (int i = 2; i <= x; i++)
        {
            if (x % i == 0 && x != 2)
            {
                printf("Composite number");
                break;
            }

            else
                printf("prime number");
            break;
        }
    }
    return 0;
}