#include<iostream>
using namespace std;

int main(){
    int num, fac;
    fac=1;
    cout<<"Enter a number whose factorial you want "<<endl;
    cin>>num;
    for(int i=num; i>1; i--)
    {
        fac*=i;
    }
    cout<<"Factorial is "<<fac;

    return 0;
}