// an array is a series of elements of the samedata placed in a contigious memory locations that can be individually referenced by adding an index to a unique identifier

#include<iostream>
using namespace std;

int main()
{
    int arr[3]={1, 2, 3};
    cout<<"First element is "<<arr[0]<<endl;
    cout<<"Second element is "<<arr[1]<<endl;
    cout<<"Third element is "<<arr[2]<<endl;

    double arr1[5];
    arr1[0]=1.456;
    arr1[1]=36.765;

    char myarr[4];
    myarr[0]='a';

    int tempArr[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Enter "<<i<<"th element-";
        cin>>tempArr[i];
    }
    return 0;
}