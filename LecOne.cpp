#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// git add .
// git commit -m "comment"
// git push

int main()
{
    cout << "Hello World!" << endl;
    // cout - Console Output
    // endl - Endline

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

    // Comparison Operators:
    //  ==, !=, >, >=, <, <=,

    // Conditions And Conditional Executions
    // if(true_or_not) do_this_if_true();
    if (sheep_counter == 0)
    {
        cout << "There Are No Sheep: " << sheep_counter << endl;
    }
    else
    {
        cout << "There Are " << sheep_counter << " Amount of Sheep." << endl;
    }

    // Console Input - cin >>
    string user_input;
    cout << "Say Something: ";
    cin >> user_input;
    cout << "You Said: " << user_input << endl;

    return 0;
}
