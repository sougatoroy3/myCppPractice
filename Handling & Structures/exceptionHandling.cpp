#include<iostream>
using namespace std;

int main()
{
    int numerator, denominator, result;

    cout<<"Enter numerator and denominator "<<endl;
    cin>>numerator>>denominator;
    // when numeraor is 5 and denominator is 0 it will give an error

    try //program wont crash in between when an error occurs
    {
        if(denominator==0)
        {
            throw denominator;
        }
        result=numerator/denominator; //division happens here
    }
    catch(int ex)
    {
        cout<<"Division by 0 is not allowed."<<ex;
    }
    

    
    cout<<"Division is: "<<result;

    
    return 0;
}