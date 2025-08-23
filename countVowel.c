// count vowel and consonants ib a string?
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the size of Array = ");
    scanf("%d", &x);
    char arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d lowercase alphabet = ", i + 1);
        scanf(" %c", &arr[i]); // The space before %c tells scanf to skip whitespace (\n, space, tab).
                               // Now, \n is ignored, and it waits for real input (like a).
    }
    printf("Your string = ");
    for (int i = 0; i < x; i++)
    {
        printf("%c ", arr[i]);
    }
    int volwel = 0;
    int consonant = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            volwel++;
        else
            consonant++;
    }
    printf("\nNumber of vowels in your string = %d\n", volwel);
    printf("Number of consonants in your string = %d", consonant);

    return 0;
}