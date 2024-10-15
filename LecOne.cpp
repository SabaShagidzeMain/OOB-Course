#include <iostream>

using namespace std;

// git add .
// git commit -m "comment"
// git push

int main()
{
    cout << "Hello World!" << endl;

    int counter;
    counter = 13;

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

    // Increment & Decrement
    int sheep_counter;
    sheep_counter = 0;
    sheep_counter++; // Increment (+1)
    sheep_counter--; // Decrement (-1)
    cout << sheep_counter << endl;

    return 0;
}
