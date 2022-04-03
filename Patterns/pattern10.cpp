/*
1
2 1
3 2 1
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
        int j=1, c=i;
        while(j<=i)
        {
            cout<<c<<" ";
            c--;
            j++;
        }
        cout<<endl;
        i++;
    }
}