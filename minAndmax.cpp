#include <iostream>
using namespace std;
int main()
{
    int num;
    int input;
    int minimal;
    int maximal;
    cin >> num;
    if(num > 0)
    {
        cin >> input;
        minimal = input;
        maximal = input;
        for(int i = 0; i < num - 1; ++i)
        {
            cin >> input;
            if(minimal > input)
            {
                minimal = input;
            }

            if(maximal < input)
            {
                maximal = input;
            }
        }
        cout << minimal << endl;
        cout << maximal << endl;
    }
    cout << "done!";
    return 0;
}
