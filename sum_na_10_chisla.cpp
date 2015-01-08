#include <iostream>>
using namespace std;
int main()
{
    int input;
    int sum = 1;
    for(int i = 0; i < 10; ++i)
    {
        cin >> input;
        sum = sum * input;
    }
    cout << sum;
    return 0;
}
