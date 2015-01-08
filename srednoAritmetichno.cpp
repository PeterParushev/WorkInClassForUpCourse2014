#include<iostream>
using namespace std;

int main()
{
    int arraysize;
    cin >> arraysize;

    int a[arraysize];
    int sum = 0;


    for (int i = 0; i < arraysize; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
    cout << sum / arraysize;
    return 0;
}
