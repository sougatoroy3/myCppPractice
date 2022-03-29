#include<iostream>
using namespace std;

int add(int a, int b)
{
    cout<<"1st one."<<endl;
    return (a+b);
}

double add(double a, double b)
{
    cout<<"2nd one."<<endl;
    return (a+b);
}

float add(int a, float b)
{
    cout<<"3rd one."<<endl;
    return (a+b);
}

int add(int a, int b, int c)
{
    cout<<"4th one."<<endl;
    return (a+b+c);
}

double add(int a, double b)
{
    cout<<"5th one."<<endl;
    return (a+b);
}

double add(double a, int b)
{
    cout<<"6th one."<<endl;
    return (a+b);
}

int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.5,2.5)<<endl;
    cout<<add(1,4.1)<<endl;
    cout<<add(4,5,1)<<endl;
    cout<<add(5,2.5)<<endl;
    cout<<add(1.5,5)<<endl;
    return 0;
}