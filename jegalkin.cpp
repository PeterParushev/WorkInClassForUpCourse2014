#include<iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    bool a0;
    bool a1, a2, a3;
    bool a12, a13, a23;
    bool a123;

    a0 = input[0] == '1';

    a3 = !a0 ^ input[1] == '1';
    a2 = !a0 ^ input[2] == '1';
    a1 = !a0 ^ input[4] == '1';

    a12 = !a0 ^ !a1 ^ !a2 ^ input[6] == '1';
    a13 = !a0 ^ !a1 ^ !a3 ^ input[5] == '1';
    a23 = !a0 ^ !a2 ^ !a3 ^ input[3] == '1';

    a123 = !a0 ^ !a1 ^ !a3 ^ !a12 ^ !a13 ^ !a23 ^ input[7] == '1';

    cout << "f(x, y, z)= ";
    if(a0)
    {
        cout << a0;
    }

    if(a1)
    {
        cout << " +x";
    }

    if(a2)
    {
        cout << " +y";
    }

    if(a3)
    {
        cout << " +z";
    }

    if(a12)
    {
        cout << " +xy";
    }

    if(a13)
    {
        cout << " +xz";
    }

    if(a23)
    {
        cout << " +yz";
    }

    if(a123)
    {
        cout << " +xyz";
    }
}
