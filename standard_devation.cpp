#include <iostream>
#include <math.h>
using namespace std;
void standard(int n, int arr[], float *avgsq, float *avg)
{
    float sum = 0;
    float sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(arr[i], 2);
    }
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + arr[i];
    }
    *avgsq = sum / n;
    *avg = sum2 / n;
    *avg = pow(*avg, 2);
    return;
}
int main()
{
    int n;
    cout << "Enter the size of Array = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element = ";
        cin >> arr[i];
    }
    float avgsq = 0;
    float avg = 0;
    standard(n, arr, &avgsq, &avg);
    float stand = avgsq - avg;
    float sd = sqrt(stand);
    cout << "Stand devation = " << sd;
    return 0;
}