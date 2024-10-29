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

    // Switch Case Statements
    switch (i)
    {
    case 1:
        cout << "Only One?" << endl;
        break;
    case 2:
        cout << "I Want More" << endl;
        break;
    case 3:
        cout << "Not Bad" << endl;
        break;
    case 4:
        cout << "Ok" << endl;
        break;
    default:
        cout << "Default Output" << endl;
    }

    // Task 1.1
    cout << "===========================================" << endl;
    cout << "Task 1.1" << endl;
    cout << "Saba Shagidze" << endl;
    cout << "21" << endl;
    cout << "Georgia" << endl;

    // Task 1.2
    cout << "===========================================" << endl;
    cout << "Task 1.2" << endl;
    int age = 21;
    cout << "Age is: " << age << endl;

    // Task 1.5
    cout << "===========================================" << endl;
    cout << "Task 1.5" << endl;
    int phone_number = 577353535;
    double id_number = 1405045666;
    char gender = 'M';
    cout << phone_number << " " << id_number << " " << gender << endl;

    // Task 1.6
    cout << "===========================================" << endl;
    cout << "Task 1.6" << endl;
    int date;
    int month;
    int year;
    cout << "Enter Date/Month/Year:";
    cin >> date >> month >> year;

    if (month >= 1 && month <= 12)
    {
        cout << date << "/" << month << "/" << year << endl;
    }
    else
    {
        cout << "incorrect month" << endl;
    }

    // Task 1.7
    cout << "===========================================" << endl;
    cout << "Task 1.6" << endl;
    int threeDigit;
    cout << "Write A Three Digit Number" << endl;
    cin >> threeDigit;
    cout << threeDigit / 100 * 100 << "+" << threeDigit / 10 % 10 * 10 << "+" << threeDigit % 10 << endl;

    return 0;
}
