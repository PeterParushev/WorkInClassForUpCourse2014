#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int temp;

    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;


    cout << a << endl;
    cout << b << endl;

    return 0;
}
