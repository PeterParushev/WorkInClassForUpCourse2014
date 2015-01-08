#include<iostream>

using namespace std;
int main(){
    int a = 42;
    int& b = a;
    cout << a << " " << b << endl;
    a++;
    cout << a << " " << b << endl;
    b++;
    cout << a << " " << b << endl;
    return 0;
}
