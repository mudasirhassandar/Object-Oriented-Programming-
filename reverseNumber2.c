#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    int a;
    int i = 1;
    do
    {
        a = n % 10;
        printf("%d", a);
        n = n / 10;
        i++;
    } while (i <= n);

    return 0;
}