#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    bool flag = true;
    if (n == 1)
        printf("%d is nither prime nor composite", n);
    if (n == 2)
        printf("prime number");
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            flag = true;
        break;
    }
    if (flag == false)
        printf("Prime number");
    else
        printf("composit number");

    return 0;
}
