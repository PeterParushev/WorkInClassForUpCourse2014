#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int input;
    int counter = 0;
    while(sum <= 42)
    {
        cin >> input;
        sum += input;
        ++counter;
    }
    cout << sum << endl << counter;
    return 0;
}
