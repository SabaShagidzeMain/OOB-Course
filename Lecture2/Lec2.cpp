#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "How Many Integers?" << endl;
    cin >> amount;

    if (amount < 10)
    {
        int *integers = new int[amount];

        for (int i = 0; i < amount; i++)
        {
            cout << "Enter integer " << (i + 1) << ": ";
            cin >> integers[i];
        }

        cout << "Entered integers in reverse order: ";
        for (int i = amount - 1; i >= 0; i--)
        {
            cout << integers[i] << " ";
        }
        cout << endl;

        delete[] integers;
    }
    else
    {
        cout << "Illegal Amount" << endl;
    }

    return 0;
}
