#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << "{";
    for (int i = 0; i < n; ++i)
    {
        if(i == 3)
        {
            break;
        }

        for (int p = 0; p < n; ++p)
        {
            if(p == 3)
            {
                break;
            }
            cout << "(" << i << ";" << p << "), ";
        }
    }

    cout<<"}";
    return 0;
}
