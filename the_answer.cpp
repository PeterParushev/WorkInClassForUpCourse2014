#include<iostream>
using namespace std;

int give_the_answer()
{
    return 42;
}

int main()
{
    int answer = give_the_answer() / 2;
    cout << answer;
    return 0;
}
