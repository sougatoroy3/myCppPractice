// condition is checked after execution in 'do...while'
#include<iostream>
using namespace std;
int main(){
    char ch;
    do{
        cout<<"I am Babui "<<"Enter a character again ";
        cin>>ch;
    }while(ch=='x');

    return 0;
}