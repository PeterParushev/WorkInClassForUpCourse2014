#include<iostream>
#include<cmath>
using namespace std;

double calculate_heputenyse(double a, double b)
{
    return sqrt(a*a + b*b);
}

int main()
{
    cout << calculate_heputenyse(3, 4);
    return 0;
}

