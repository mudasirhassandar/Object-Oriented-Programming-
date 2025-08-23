#include <stdio.h>
int main()
{
    float x;
    printf("Enter first number = ");
    scanf("%f", &x);
    float y;
    printf("Enter second number = ");
    scanf("%f", &y);
    int z;
    printf("Which operation:- \n 1>Addition \n 2>subtraction \n 3>Multiplication \n 4>Division \n = ");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        printf("%f+%f=%f", x, y, x + y);
        break;
    case 2:
        printf("%f-%f=%f", x, y, x - y);
        break;
    case 3:
        printf("%f*%f=%f", x, y, x * y);
        break;
    case 4:
        printf("%f/%f=%f", x, y, x / y);
        break;

    default:
        printf("invalid operation");
        break;
    }

    return 0;
}