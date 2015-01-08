#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int grades[n];
    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
    }

    for(int i=0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(grades[i] > grades[j])
            {
                int temp = grades[i];
                grades[i] = grades[j];
                grades[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        cout << grades[i] << " ";
    }
}
