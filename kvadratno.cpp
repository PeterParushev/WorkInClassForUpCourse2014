#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c, D;
    cin>> a >> b >> c;
    D=b * b - 4 * a * c;
    if(D < 0){
        cout<<"No roots"<<endl;
    }
    if(D == 0){
        cout<< -b / (2 * a)<<endl;
    }
    if(D > 0){
        cout<< (-b - sqrt(D)) / (2 * a)<<endl;
        cout<< (-b + sqrt(D)) / (2 * a)<<endl;

    }
}
