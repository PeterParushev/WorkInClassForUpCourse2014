#include <iostream>
using namespace std;
int main ()
{
    double realA;
    double imgA;
    double realB;
    double imgB;
    cin >> realA >> imgA >> realB >> imgB;
    cout << realA + realB << "+" << imgA + imgB << "i"<<endl;
    cout << realA - realB << "+" << imgA - imgB << "i"<<endl;
    cout<< realA*realB-imgA*imgB << "+" << realA*imgB+realB*imgA << "i"<<endl;
    return 0;
}
