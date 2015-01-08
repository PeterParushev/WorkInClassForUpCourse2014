#include<iostream>
using namespace std;

double opposite(double number)
{
    return 1 / number;
}

int main()
{
    double input;
    cin >> input;

    double answer = opposite(input);
    cout << answer;
    return 0;
}
