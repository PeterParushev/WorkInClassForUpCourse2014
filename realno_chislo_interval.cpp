#include <iostream>
using namespace std;
int main(){

  double input;
  double a, b;
  cin >> a >> b;
  if(a > b){
        cout << "error";
  }

  else{
    do
    {
        if(!(a <= input && input <= b))
        {
            break;
        }
         cin >> input;
         cout << "True";
    }
    while(a <= input && input <= b)
  }
    return 0;
}
