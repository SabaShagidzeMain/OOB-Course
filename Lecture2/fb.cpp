#include <iostream>

using namespace std;

int main()
{
    int x[10];

    x[0] = 0;
    x[1] = 1;

    for (int i = 2; i < 10; i++)
    {
        x[i] = x[i - 2] + x[i - 1];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << "fib";
    }

    return 0;
}