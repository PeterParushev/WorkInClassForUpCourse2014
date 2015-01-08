#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    string a = "ivan 10";
    int orders = atoi("10");
    orders++;
    cout << orders;
    a = "ivan" + orders;
    cout << a;


    return 0;
}
