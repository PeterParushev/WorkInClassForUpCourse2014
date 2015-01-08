#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int E[100];
    int input;
    cin >> input;
    while (input != 0)
    {
        E[i] = input;
        ++i;
        cin >> input;
    }

    int sum = 0;
    int index_minimum = 0, index_maximum = 0;
    bool ascending = true, descending = true;

    for(int k = 0; k < i; ++k)
    {
        sum += E[k];//adding every element

        if(E[k] > E[index_maximum])//checking if element is the current maximum
        {
            index_maximum = k;
        }

        if(E[k] < E[index_minimum])//checking if element is the current minimum
        {
            index_minimum = k;
        }
    }

    for(int k = 1; k < i; ++k)
    {
        if(E[k - 1] > E[k]) ascending = false;//checking if two elements are not ascending
        if(E[k - 1] < E[k]) descending = false;//checking if two elements are not descending
    }

    cout << "sum: " << sum<< endl;
    cout << "average: " << (double)sum/i<<endl;
    cout << "max: " << E[index_maximum] <<" maxIndex: "<< index_maximum <<endl;
    cout << "min: " << E[index_minimum]<<" minIndex: "<<index_minimum<<endl;
    cout << "ascending: " << boolalpha << ascending << endl;
    cout << "descending: " << boolalpha << descending << endl;
    return 0;
}
