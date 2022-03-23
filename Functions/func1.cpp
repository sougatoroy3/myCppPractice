#include<iostream>
using namespace std;

// signature of the function
// body of the function
// returnType functionName(parameter list){body of the function}

int maximum(int a, int b); // forward declaration cause the function is after the main function

void printMessage() // void function which returns nothing
{
    cout<<"Hello Bruhhhh!";
}

int main()
{
    int a,b;
    cout<<"Enter two numbers to find the greatest one-"<<endl;
    cin>>a>>b;

    int c=maximum(a,b); // calling a function
    cout<<c;
    printMessage();
    return 0;
}

int maximum(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}

