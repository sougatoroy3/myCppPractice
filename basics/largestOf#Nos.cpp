#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 3 numbers of your choice "<<endl;
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    
    if (n1>n2)
    {
        if(n1>n3)
        {
            cout<<n1<<" is the greatest.";
        }
        else
        {
            cout<<n3<<" is the greatest.";
        }
    }
    else if(n2>n1)
    {
        if(n2>n3)
        {
            cout<<n2<<" is the greatest.";
        }
        else
        {
            cout<<n3<<" is the greatest.";
        }
    }
    else{
        cout<<n3<<" is the greatest.";
    }
    return 0;
}