// enter a number between 1 to 7 and print the subsequent day
#include<iostream>
using namespace std;
int main(){
    int day;
    
    cout<<"Enter a day number-->";
    cin>>day;

    switch (day)
    {
        case 1:
            cout<<"Sunday";
            break;
        case 2:
            cout<<"Monday";
            break;
        case 3:
            cout<<"Tuesday";
            break;
        case 4:
            cout<<"Wednesday";
            break;
        case 5:
            cout<<"Thursday";
            break;
        case 6:
            cout<<"Friday";
            break;
        case 7:
            cout<<"Saturday";
            break;
           
        default:
            break;
    }

    return 0;
}