#include <stdio.h>
#include <stdbool.h>
int prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    bool flag = true;
    if (n == 1)
        printf("%d is nither prime nor composite", n);
    if (n == 2)
        printf("print %d", n);
    int i = 2;
    while (i <= n)
    {
        if (prime(i))
            printf("%d ", i);
        i++;
    }

    return 0;
}