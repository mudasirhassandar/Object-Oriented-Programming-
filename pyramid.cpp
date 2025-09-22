#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines = ";
    cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= a + i; j++)
        {
            printf("%c ", 'X');
        }
        a++;
        printf("\n");
    }
    return 0;
}