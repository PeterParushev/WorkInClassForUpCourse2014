#include <iostream>
using namespace std;
int main()
{
    int facultyNumber;
    cin >> facultyNumber;
    if(facultyNumber / 10000 == 6 && (facultyNumber / 1000) % 10 == 1)
    {
        cout << "SI";
    }
}
