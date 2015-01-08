#include <iostream>
using namespace std;

void say_a();

void say_b()
{
    cout << 'b';
    say_a();
}

void say_a()
{
    cout << 'a';
    say_b();
}

int main()
{
    say_a();
}
