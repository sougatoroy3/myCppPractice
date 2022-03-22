#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check-->";
    cin>>num;
    if (num > 0){
        cout<<"Number is Positive";
    }  
    else if (num == 0){
        cout<<"Number is 0";
    }
    else{
        cout<<"Number is Negative";
    }
    
    return 0;
}