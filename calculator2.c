#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number = ");
    scanf("%d", &a);
    int b;
    printf("Enter the second number = ");
    scanf("%d", &b);
    int menu;
    while (1)
    {
        printf("SELECT OPERATION\n1) ADDITION\n2) SUBTRACTION\n3) MULTIPLICATION\n4) DIVISION\n5) MODULAS\n0) Exit\n ENTER = ");
        scanf("%d", &menu);
        if (menu == 0)
        {
            printf("Exiting....\n");
            break;
        }

        switch (menu)
        {
        case 1:
            printf("%d+%d=%d", a, b, (a + b));
            break;
        case 2:
            printf("%d-%d=%d", a, b, (a - b));
            break;
        case 3:
            printf("%d*%d=%d", a, b, (a * b));
            break;
        case 4:
            printf("%d/%d=%d", a, b, (a / b));
            break;
        case 5:
            printf("%d%%%d=%d", a, b, (a % b));
            break;

        default:
            printf("INVALID OPERATION");
            break;
        }
        printf("\n");
    }
    return 0;
}