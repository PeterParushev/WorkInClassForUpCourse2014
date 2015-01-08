#include<iostream>

using namespace std;

int main()
{
    string palind;
    cin >> palind;

    int size_p = palind.length();
    bool isPalind = true;

    for(int i = 0;i < size_p / 2; i++ )
    {
        if(palind[i] != palind[size_p - i - 1])
        {
            isPalind = false;
            break;
        }
    }

    cout << isPalind;
    return 0;
}

