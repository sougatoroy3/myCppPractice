#include<iostream>
using namespace std;

int main()
{
    int A[3], B[3];
    int add[3], sub[3], mul[3];

    for(int i=0; i<3; i++)
    {
        cout<<"Enter integers for array A and then array B fpr the "<<i<<"th element"<<endl;
        cin>>A[i];
        cin>>B[i];
    }
    for(int i=0; i<3; i++)
    {
        add[i]=A[i]+B[i];
        cout<<"Addition of "<<A[i]<<" and "<<B[i]<<" is = "<<add[i]<<endl;
        sub[i]=A[i]-B[i];
        cout<<"Subtraction of "<<A[i]<<" and "<<B[i]<<" is = "<<sub[i]<<endl;
        mul[i]=A[i]*B[i];
        cout<<"Multiplication of "<<A[i]<<" and "<<B[i]<<" is = "<<mul[i]<<endl;
    }
}