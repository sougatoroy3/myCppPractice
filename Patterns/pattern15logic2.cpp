/*
A
B B
C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i=1;

    cin>>n;
    
    while(i<=n)
    {
        int j=1;

        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}