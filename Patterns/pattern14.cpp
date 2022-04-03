/*
A B C
B C D
C D E 
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i=1;
    char ch='A';
    cin>>n;

    while(i<=n)
    {
        int j=1;
        ch=ch+i-1;
        char ch1=ch;
        while(j<=n)
        {
            cout<<ch1<<" ";
            ch1++;
            j++;
        }
        cout<<endl;
        i++;
    }
}