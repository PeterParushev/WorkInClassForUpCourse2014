#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string alphabet;
    for(char i = 'a'; i <= 'z'; ++i)
    {
        alphabet += i;
    }

    cout << alphabet;

    return 0;
}
