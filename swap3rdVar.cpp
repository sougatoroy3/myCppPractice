#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    x=5;
    y=10;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"The new value of x is "<<x<<endl;
    cout<<"The new value of y is "<<y<<endl;

    return 0;
}