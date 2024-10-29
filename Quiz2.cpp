include <iostream>


using namestpace std;

int main() {
 int userDegree;

 cout << "Enter Temp" << endl;
 cin >> userDegree;   

 if (userDegree < 0) {
    cout << "Freezing:" << userDegree << "Deg" <<endl
 } else if (0 < userDegree < 10) {
    cout << "Very Cold:" << userDegree << "Deg" <<endl
 } else if (10 < userDegree << 20) {
     cout << "Cold:" << userDegree << "Deg" <<endl
 } else if (20 < userDegree << 30) {
     cout << "Normal:" << userDegree << "Deg" << endl
 } else if (30 < userDegree << 40) {
     cout << "Hot:" << userDegree << "Deg" << endl
 } else if (userDegree > 40) {
    cout << "Very Hot:" << userDegree << endl;
 } else {
    cout << "Default Error"
 }
}