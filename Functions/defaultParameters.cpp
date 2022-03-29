#include<iostream>
using namespace std;

int sum(int a, int b, int c=0, int d=5) // value of default parameters should always start from Right to LEft and not in between or so
{
    return (a+b+c+d);
}

int main()
{
    cout<<"Sum of 1,2,3,4 is --> "<<sum(1,2,3,4)<<endl;

    cout<<"Sum of 1,2 and default parameters is --> "<<sum(1,2);
    return 0;
}