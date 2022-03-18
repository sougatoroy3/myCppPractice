// WAP print your name until USER enters 'X'
// condition is checked before execution in 'while'
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;

    while(ch=='X')
    {
        cout<<"My name is BAbui"<<endl;
        cout<<"Enter a character again"<<endl;
        cin>>ch;
    }

    return 0;
}