#include <iostream>
using namespace std;

int faktoriel(int a)
{
    if (a == 0) return 1;
    return a*faktoriel(a-1);
}

int main()
{
    int num;
    cin >> num;
    cout << faktoriel(num);
    return 0;
}
