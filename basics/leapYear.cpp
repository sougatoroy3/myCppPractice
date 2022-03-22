#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter a year to check if it's laep year or not "<<endl;
    cin>>year;

    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                cout<<"LEAP YEAR :D";
            }
            else
            {
                cout<<"NOT A LEAP YEAR :(";
            }
        }
        else 
        {
            cout<<"LEAP YEAR :D";
        }
    }
    else
    {
        cout<<"NOT A LEAP YEAR :(";
    }
    return 0;
}