#include <iostream>
using namespace std;
int main()
{
    int fieldSize = 3;
    char a[fieldSize][fieldSize];
    for(int i = 0; i < fieldSize; ++i)
    {
        for (int p = 0; p < fieldSize; ++p)
            cin >> a[i][p];
    }

    for(int i = 0; i < fieldSize; ++i)
    {
        for (int p = 0; p < fieldSize; ++p)
        {
         cout << a[i][p];
        }

        cout << endl;
    }

    return 0;
}
