#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
    cout << (-b + sqrt(D)) / (2 * a) << endl;
    cout << (-b - sqrt(D)) / (2 * a) << endl;
    return 0;
}
