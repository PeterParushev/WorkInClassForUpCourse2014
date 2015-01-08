#include <iostream>

using namespace std;

void print_even_numbers_in_range(int a, int b)
{
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    for(int i = 0; i < 6; ++i)
    {
        print_even_numbers_in_range(i, i * 10);
    }

    return 0;
}
