#include <iostream>
using namespace std;
int main()
{
    float weight;
    cout << "Enter the weight of walnuts in kg = ";
    cin >> weight;
    float total_ma_an = weight / 40.0;
    int num_bag;
    cout << "Enter the number of walnuts bags = ";
    cin >> num_bag;
    float wastage;
    cout << "Enter the wastage of one walnut bag = ";
    cin >> wastage;
    float total_wastage = (num_bag * wastage) / 40.0;
    int rate;
    cout << "Enter the rate of one ma_aan = ";
    cin >> rate;
    int total_amount = rate * (total_ma_an - total_wastage);
    cout << "\n";
    cout << "Total MA-Ann = " << total_ma_an;
    cout << "\n";
    cout << "Total walnut bags  = " << num_bag;
    cout << "\n";
    cout << "Total wastage in MA-AN = " << total_wastage;
    cout << "\n";
    cout << "Remaining stock of walnuts in MA-ANN = " << total_ma_an - total_wastage;
    cout << "\n";
    cout << "In Hand amount to the Grower = " << total_amount;
    return 0;
}