#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    printf("entered number = %d", x);
    printf("\n");
    printf("Reverse number = ");
    int rev_number = 0;
    for (int i = 1; x > 0; i++)
    {
        rev_number = x % 10;
        printf("%d", rev_number);
        x = x / 10;
    }
    return 0;
}