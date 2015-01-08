#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    int* pointer_to_a = &a;
    int b = *pointer_to_a;

    cout << a << " " << b << endl;


    cout << a << " " << b;
    return 0;
}
