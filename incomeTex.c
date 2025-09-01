#include <stdio.h>
int main()
{
    int x;
    printf("Enter the annual income = ");
    scanf("%d", &x);
    if (x <= 250000)
        printf("NO TEX ON YOUR AMOUNT OF %d", x);
    else if (x > 250000 && x <= 500000)
    {
        printf("YOU HAVE TO PAY 5%% TEX OF YOUR AMOUNT %d\n", x);
        printf("TEX AMOUNT = %d ", (x * 5) / 100);
    }
    else if (x > 500000 && x <= 1000000)
    {
        printf("YOU HAVE TO PAY 20%% TEX OF YOUR AMOUNT %d\n", x);
        printf("TEX AMOUNT = %d ", (x * 20) / 100);
    }
    else if (x > 1000000)
    {
        printf("YOU HAVE TO PAY 30%% TEX Of YOUR AMOUNT %d\n", x);
        printf("TEX AMOUNT = %d ", (x * 30) / 100);
    }

    return 0;
}