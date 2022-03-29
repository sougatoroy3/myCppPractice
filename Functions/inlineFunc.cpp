#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a+b);
}

int main()
{
    int c=add(4,5);
    cout<<"Addition of 4 and 5 is: "<<c;
    return 0;
}