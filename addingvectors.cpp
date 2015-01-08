#include <iostream>
using namespace std ;
int main ()
{
    int arraysize;
    cin >> arraysize;
    int A[arraysize], B[arraysize], C[arraysize];
    for (int i = 0; i < arraysize; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < arraysize; ++i)
    {
        cin >> B[i];
    }

    for (int i = 0; i < arraysize; ++i)
    {
        C[i] = A[i] + B[i];
        cout << C[i];
    }
}
