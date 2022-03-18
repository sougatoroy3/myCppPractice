#include<iostream>
using namespace std;

int main(){
    int x, y;
    x=5;
    y=10;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    
    cout<<"The new value of x is "<<x<<endl;
    cout<<"The new value of y is "<<y<<endl;

    return 0;
}