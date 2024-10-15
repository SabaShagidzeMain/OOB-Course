#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int counter;
    counter = 13;

    // Same (variable + 1)
    counter = counter + 1;
    counter++;
    cout << counter << endl;

    int i, j, k, l;

    // Multiplication
    i = 10;
    j = 5;
    k = i * j;
    cout << j << endl;

    // Division
    l = i / j;
    cout << l << endl;

    // Remainder
    int f, r, t;
    f = 13;
    r = 5;
    t = f % r;
    cout << r << endl;

    return 0;
}
