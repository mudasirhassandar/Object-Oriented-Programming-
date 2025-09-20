#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element = ";
        cin >> arr[i];
        cout << "\n";
        cout << "Your array: \n";
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Smallest numbers = " << min << "\n";
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "largest numbers = " << max << "\n";
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float avg = sum / n;
    cout << "Avrage = " << avg;
    return 0;
}
