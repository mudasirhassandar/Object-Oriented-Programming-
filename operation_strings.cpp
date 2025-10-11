#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100];
    cout << "Enter first string = \n";
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    char str2[100];
    cout << "Enter second string = \n";
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    cout << "Entered strings are :-\n";
    puts(str1); // prints string 1.
    puts(str2); // prints string 2.
    cout << "\n";
    // saving the original strings.
    char string1[100];
    strcpy(string1, str1);
    char string2[100];
    strcpy(string2, str2);
    char string3[100];
    strcpy(string3, str1);
    char string4[100];
    strcpy(string4, str2);
    // code for length.
    int length1 = 0;
    int length2 = 0;
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    { // this loop cal. the length of strings
        if (str1[i] != '\0')
            length1++;
        if (str2[i] != '\0')
            length2++;
        i++;
    }
    cout << "Length of first string = " << length1 << endl;
    cout << "Length of second string = " << length2 << "\n";
    // code for reverse.
    int k = 0;
    int j = length1 - 1;
    int l = length2 - 1;
    while (k < j || k < l)
    {
        if (k < j)
        {
            char temp = str1[k];
            str1[k] = str1[j];
            str1[j] = temp;
            j--;
        }
        if (k < l)
        {
            char temp = str2[k];
            str2[k] = str2[l];
            str2[l] = temp;
            l--;
        }
        k++;
    }
    cout << "Reverse of first string:\n";
    puts(str1);
    cout << "Reverse of second string:\n";
    puts(str2);
    // code for concatenation.
    int m;
    for (m = 0; string1[m] != '\0'; m++)
        ;
    string1[m] = ' ';
    m++;
    for (int n = 0; string2[n] != '\0'; n++)
    {
        string1[m] = string2[n];
        m++;
    }
    cout << "Concatenate string:-\n";
    puts(string1);
    cout << "\n";
    // code for substring.
    char str3[100];
    cout << "Enter the string for checking that the string is substring of first string or second string = \n";
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';
    int issubtring = 0;
    for (int i = 0; str3[i] != '\0'; i++)
    {
        if (str3[i] == string3[i])
            issubtring = 1;
        else
            issubtring = 0;
    }
    if (issubtring == 1)
        cout << "Entered string is subset of first string\n";
    else
        cout << "Entered string is not subset of first string\n";

    for (int i = 0; str3[i] != '\0'; i++)
    {
        if (str3[i] == string2[i])
            issubtring = 1;
        else
            issubtring = 0;
    }
    if (issubtring == 1)
        cout << "Entered string is subset of second string\n";
    else
        cout << "Entered string is not subset of second string\n";
    // code for frequency;
    char x;
    cout << "Enter the character for checking its frequency = \n";
    cin >> x;
    int count1 = 0;
    for (int i = 0; string3[i] != '\0'; i++)
    {
        if (x == string3[i])
            count1++;
    }
    int count2 = 0;
    for (int i = 0; string2[i] != '\0'; i++)
    {
        if (x == string2[i])
            count2++;
    }
    cout << "Frequency of " << x << " in first string = " << count1 << endl;
    cout << "Frequency of " << x << " in second string = " << count2 << endl;
    return 0;
}