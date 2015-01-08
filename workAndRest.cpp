#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n;
    cin>>n;
    switch(n)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Work";
        break;
    case 6:
    case 7:
        cout << "Rest";
        break;
    default:
        cout << "invalid input";
        break;
    }

    return 0;
}
