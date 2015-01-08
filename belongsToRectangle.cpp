#include <iostream>
using namespace std;
int main()
{
    int x1 = 2;
    int x2 = 4;
    int y1 = 2;
    int y2 = 1;
    double pointX;
    double pointY;
    cin >> pointX;
    cin >> pointY;
    if(x1 <= pointX && x2 >= pointX && y1 >= pointY && y2 <= pointY)
    {
        cout << "Tochkata prinadleji";
    }
    else
    {
        cout << "Tochkata ne prinadleji";
    }
}
