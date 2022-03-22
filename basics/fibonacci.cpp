#include<iostream>
using namespace std;

int main()
{
    int num, f=0, s=1, nxt;

    cout<<"Enter terms' value-"<<endl;
    cin>>num;

    for(int i=0; i<num; i++)
    {
        cout<<f<<" ";
        nxt=f+s;
        f=s;
        s=nxt;
    }
}