#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string log[]={"<--%Go6o%-->", "<--%Pe6o%-->", "<--%Gabriela%-->"};
    int index1;
    int index2;

    for(int i = 0; i < 3; ++i){
       index1 = log[i].find("-%") +2;
       index2 = log[i].find("%-")-4;

      cout << log[i].substr(index1,index2) << endl;
    }

    return 0;
}
