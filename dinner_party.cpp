#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
int main()
{
    int n;
    cout << "Enter the number of guests = ";
    cin >> n;
    int m;
    cout << "Enter the number of tables = ";
    cin >> m;
    int arrang = factorial(n) / factorial(n - m);
    printf("Possible arrangements = %d", arrang);
}