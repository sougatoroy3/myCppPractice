/* 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
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
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}