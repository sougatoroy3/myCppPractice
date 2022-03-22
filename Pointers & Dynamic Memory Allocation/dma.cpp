#include<iostream>
using namespace std;

int main()
{
    int size;
    int *ptr;

    cout<<"Enter number of values you want to storer(size of array):"<<endl;
    cin>>size;

    ptr=new int[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter number of values in the array for the "<<i<<"ith element "<<endl;
        cin>>ptr[i];
    }
    cout<<"Values in the array are as follows"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<ptr[i]<<endl;
    }
}