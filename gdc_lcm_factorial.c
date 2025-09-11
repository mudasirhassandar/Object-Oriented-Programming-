#include <stdio.h>

// Function to calculate factorial
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b); // lcm(a,b)*gdc(a,b)=a*b
}

int main()
{
    int choice;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Find Factorial\n");
        printf("2. Find GCD\n");
        printf("3. Find LCM\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num < 0)
            {
                printf("Factorial is not defined for negative numbers.\n");
            }
            else
            {
                printf("Factorial of %d = %d\n", num, factorial(num));
            }
            break;
        }
        case 2:
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
            break;
        }
        case 3:
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("LCM of %d and %d = %d\n", a, b, lcm(a, b));
            break;
        }
        case 4:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
