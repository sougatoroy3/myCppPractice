#include<iostream>
using namespace std;

void passByValue(int x, int y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int a=5, b=6;
    cout<<"Before swapping "<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;
    
    // call function
    passByValue(a,b);

    cout<<"After swapping "<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;
    return 0;
}