#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        if(i % 3 == 0)
        {
            cout<<"Cyk"<<endl;
        }
        else if(i % 7 == 0)
        {
            cout<<"Cyk"<<endl;
        }
        else
            {
                cout<<i<<endl;
            }
    }
    return 0;
}
