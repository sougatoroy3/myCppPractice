#include<iostream>
using namespace std;

// pass by Value
void passByValue(int x, int y)
{
    int z=x;
    x=y;
    y=z;
}

// pass by Reference
void passByReference(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;   
}

// pass by address or pointers
void passByPointers(int *x, int *y)
{
    int z= *x;
    *x=*y;
    *y=z;
}

// main function
int main()
{
    int a=5, b=6;
    cout<<"Before swapping "<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;
    
    // call function
    passByValue(a,b);

    cout<<"After swapping using passByValue function "<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;    
    
    // call function 2
    passByReference(a,b);
    
    cout<<"After swapping using passByReference function"<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;


    // call function 3
    passByPointers(&a,&b);
    
    cout<<"After swapping using passByPointers function"<<endl<<"a= "<<a<<endl<<"B= "<<b<<endl<<endl;
    // remember that we've already swapped the values in the passByReference function so the output will show the original values i.e., the currently swapped values
    return 0;
}

