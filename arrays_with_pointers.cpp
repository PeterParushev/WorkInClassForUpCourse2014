#include<iostream>
using namespace std;
int main()
{
    int _array[] = {13, 32, 39, 111};

    for(int i = 0; i < 4; ++i)
    {
        cout << *(_array + i) << " ";
    }

    //for(int i = 0; i < 4; ++i)
    //{
    //    cout << _array[i] << " ";
    //}
}

