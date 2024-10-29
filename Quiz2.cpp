#include <iostream>

using namespace std;

int main()
{
   int userDegree;
   cout << "Enter Temp" << endl;
   cin >> userDegree;

   if (userDegree < 0)
   {
      cout << "Freezing:" << userDegree << "Deg" << endl;
   }
   else if (userDegree < 10)
   {
      cout << "Very Cold:" << userDegree << "Deg" << endl;
   }
   else if (userDegree < 20)
   {
      cout << "Cold:" << userDegree << "Deg" << endl;
   }
   else if (userDegree < 30)
   {
      cout << "Normal:" << userDegree << "Deg" << endl;
   }
   else if (userDegree < 40)
   {
      cout << "Hot:" << userDegree << "Deg" << endl;
   }
   else if (userDegree > 40)
   {
      cout << "Very Hot:" << userDegree << endl;
   }
   else
   {
      cout << "Default Error";
   }
}
