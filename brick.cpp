#include <iostream>
using namespace std;

int main()
{
    int x , y , z;
    int s1 , s2 , s3;
    cin >> x >> y >> z;

    s1 = x * y;
    s2 = y * z;
    s3 = x * z;

    int minimal = s1;

    if(s2 < minimal)
    {
        mininal = s2;
    }

    if(s3 < minimal)
    {
        minimal = s3;
    }
    cout << minimal;

        /*if ( s1 < s2 && s1 < s3)
    {
        cout << s1;
    }
    else if ( s2 < s3 && s2 < s1)
    {
        cout << s2;
    }
    else
    {
        cout << s3;
    }*/
    return 0;

}
