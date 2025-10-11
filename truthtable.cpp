#include <iostream>
using namespace std;
void xnor_operation(int x, int y)
{
    cout << "\nXNOR GATE===\n\n";
    cout << "X | Y | X(xnor)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << !(x ^ y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void xor_operation(int x, int y)
{
    cout << "\nXOR GATE===\n\n";
    cout << "X | Y | X(xor)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << (x ^ y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void nor_operation(int x, int y)
{
    cout << "\nNOR GATE===\n\n";
    cout << "X | Y | X(nor)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << !(x || y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void nand_operation(int x, int y)
{
    cout << "\nNAND GATE===\n\n";
    cout << "X | Y | X(nand)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << !(x && y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void or_operation(int x, int y)
{
    cout << "\nOR GATE===\n\n";
    cout << "X | Y | X(or)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << (x || y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void and_operation(int x, int y)
{
    cout << "\nAND GATE===\n\n";
    cout << "X | Y | X(and)Y\n";
    cout << "--|---|--------\n";
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            cout << x << " | " << y << " | " << (x && y) << endl;
        }
    }
    cout << "\n\n=============================\n\n";
}
void not_operation(int x, int y)
{
    cout << "\nNOT GATE===\n\n";
    cout << "x | NOT(x)\n";
    cout << "--|-------\n";
    cout << x << " | " << (!x) << endl;
    cout << y << " | " << (!y);
    cout << "\n\n=============================\n\n";
}
int main()
{
    int x = 1;
    int y = 0;
    while (1)
    {
        int operation;
        cout << "--Select the operation--\n1) NOT OPERATION\n2) AND OPERATION\n3) OR OPERATION\n4) NAND OPERATION\n";
        cout << "5) NOR OPERATION\n6) XOR OPERATION\n7) XNOR OPERATION\n0) EXIT\n=";
        cin >> operation;
        if (operation == 0)
        {
            cout << "THANKYOU....";
            break;
        }
        switch (operation)
        {
        case 1:
            not_operation(x, y);
            break;
        case 2:
            and_operation(x, y);
            break;
        case 3:
            or_operation(x, y);
            break;
        case 4:
            nand_operation(x, y);
            break;
        case 5:
            nor_operation(x, y);
            break;
        case 6:
            xor_operation(x, y);
            break;
        case 7:
            xnor_operation(x, y);
            break;
        default:
            cout << "\nINVALID OPERATION......\n";
            cout << "\n\n=============================\n\n";
        }
    }
    return 0;
}