/*
1
2 3
4 5 6
7 8 9 10 
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i=1, c=1;

    cin>>n;

    while(i<=n)
    {
        int j=1;

        while(j<=i)
        {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
}