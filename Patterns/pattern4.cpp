/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i=1;

    cin>>n;
    
    while(i<=n)
    {
        int j=n;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}