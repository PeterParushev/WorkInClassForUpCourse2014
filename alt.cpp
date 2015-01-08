#include<iostream>
using namespace std;

int main()
{
   double input[10];
   for (int i = 0; i < 10; ++i)
   {
       cin >> input[i];
   }

   for(int i = 0; i < 10; i += 2)
   {
       cout << input[i];
   }

    return 0;
}
