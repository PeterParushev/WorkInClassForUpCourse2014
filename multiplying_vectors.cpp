#include <iostream>
using namespace std;
int main()
{
    int a_width;
    int a_height;
    int b_width;
    cin >> a_width;
    cin >> a_height;
    cin >> b_width;
    int b[b_width][a_width];
    int a[a_width][a_height];
    int c[b_width][a_height];

    for(int i = 0; i < a_width; ++i)
    {
        for(int j = 0; j < a_height; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < b_width; ++i)
    {
        for(int j = 0; j < a_width; ++j)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < b_width; ++i)
    {
        for(int j = 0; j < a_height; ++j)
        {
            c[i][j] = 0;
            for(int t = 0; t < a_width; ++t)
            {
                c[i][j] += (a[i][t] * b[t][j]);
            }
        }
    }

    for(int i = 0; i < b_width; ++i)
    {
        for(int j = 0; j < a_height; ++j)
        {
            cout << c[i][j];
        }
        cout <<endl;
    }
}
