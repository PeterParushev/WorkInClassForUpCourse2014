#include <iostream>
using namespace std;

int fibonachi(int a)
{
    if (a == 0) return 0;
    if (a == 1) return 1;
    return fibonachi(a-1) + fibonachi(a-2);
}

int main()
{
    int num;
    cin >> num;
    cout << fibonachi(num);
    return 0;
}
