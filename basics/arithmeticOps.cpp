#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    n1=5;
    n2=4;

    cout<<"Arithmetic Operations Program"<<endl;
    cout<<"Enter the Arithmetic Operator please"<<endl;
    cout<<"1. For Addition '+'"<<"2. For Addition '-'"<<"3. For Addition '*'"<<"4. For Addition '/'"<<endl;
    char ch;
    cin>>ch;

    switch(ch)
    {
        case '+':
            cout<<"Sum of "<<n1<<" and "<<n2<<" is "<<(n1+n2);
            break;
        case '-':
            cout<<"Subtracting "<<n2<<" from "<<n1<<" is "<<(n1-n2);
            break;
        case '*':
            cout<<"Product of "<<n1<<" and "<<n2<<" is "<<(n1*n2);
            break;
        case '/':
            cout<<"Dividing "<<n1<<" by "<<n2<<" gives "<<(n1/n2);
            break;
        default:
            break;

    }

    return 0;
}