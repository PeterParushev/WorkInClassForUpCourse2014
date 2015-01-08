#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 3;
    double y = 1;
    double r = 5;

    double PointX;
    double PointY;
    cin>>PointX;
    cin>>PointY;
    double distance = sqrt( (x-PointX) * (x-PointX) + (y-PointY) * (y-PointY) );

    if( distance <= r ) {
        cout<<"In the circle "<<endl;
    }
    else {
        cout<<"Out of the circle"<<endl;
    }

    return 0;
}
