#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of Temperatures = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " temperature = ";
        cin >> arr[i];
    }
    cout << "\n";
    cout << "Temperatures Are :-\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int count = 0;
    int count2 = 0;
    int count3 = 0;
    int hotdays[1000], pleasentdays[1000], colddays[1000];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 85)
        {
            hotdays[count] = arr[i];
            count++;
        }
        else if (arr[i] >= 60 && arr[i] < 85)
        {
            pleasentdays[count2] = arr[i];
            count2++;
        }
        else
        {
            colddays[count3] = arr[i];
            count3++;
        }
    }

    cout << "\nThe number of Hot days are = " << count << " and the temperatures are: ";
    for (int i = 0; i < count; i++)
    {
        cout << hotdays[i] << " ";
    }
    cout << "\n";

    cout << "The number of Pleasant days are = " << count2 << " and the temperatures are: ";
    for (int i = 0; i < count2; i++)
    {
        cout << pleasentdays[i] << " ";
    }
    cout << "\n";

    cout << "The number of Cold days are = " << count3 << " and the temperatures are: ";
    for (int i = 0; i < count3; i++)
    {
        cout << colddays[i] << " ";
    }
    cout << "\n";

    return 0;
}
