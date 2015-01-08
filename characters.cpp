#include <iostream>
using namespace std;

int main()
{
    char arr[]="alabalar";

    for(int i = 0; i < 9; ++i)
    {
        cout << *(arr + i);
    }

    cout << endl;

    cout << arr;

    return 0;
}
